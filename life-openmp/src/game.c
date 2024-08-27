#include <raylib.h>
#include <rlgl.h>
#include <stdio.h>
#include <omp.h>

#include "life.h"
#include "parse.h"

#define RAYMATH_IMPLEMENTATION
#include "raymath.h"

#define RAYGUI_IMPLEMENTATION
#include "../thirdparty/raygui.h"

#define INTERFACE_IMPLEMENTATION
#include "interface.h"

#define FPS 60
#define WIN_WIDTH 1008
#define WIN_HEIGHT 1008
#define MAX_GRID_SIZE 100000
#define ROWS 100     // Increased grid size
#define COLUMNS 100  // Increased grid size
const char *styles[] = { "data/raygui/terminal.rgs", "data/raygui/dark.rgs" };
enum { PAUSE, PLAY };
int iterations = 10000;

int grid[ROWS][COLUMNS];

// Function to count alive neighbors
int countAliveNeighbors(int grid[ROWS][COLUMNS], int x, int y) {
    int aliveNeighbors = 0;
    for (int i = -1; i <= 1; i++) {
        for (int j = -1; j <= 1; j++) {
            if (i == 0 && j == 0) continue; // Skip the cell itself
            int nx = x + i, ny = y + j;
            if (nx >= 0 && nx < ROWS && ny >= 0 && ny < COLUMNS) {
                aliveNeighbors += grid[nx][ny];
            }
        }
    }
    return aliveNeighbors;
}

// Function to update the grid using OpenMP for parallelism
void updateGrid(int grid[ROWS][COLUMNS]) {
    int newGrid[ROWS][COLUMNS] = {0};

    #pragma omp parallel for collapse(2) // Parallelize the nested loops
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            int aliveNeighbors = countAliveNeighbors(grid, i, j);

            if (grid[i][j] == 1) { // Cell is alive
                if (aliveNeighbors < 2 || aliveNeighbors > 3) {
                    newGrid[i][j] = 0; // Cell dies
                } else {
                    newGrid[i][j] = 1; // Cell stays alive
                }
            } else { // Cell is dead
                if (aliveNeighbors == 3) {
                    newGrid[i][j] = 1; // Cell becomes alive
                }
            }
        }
    }

    // Copy newGrid to grid
    #pragma omp parallel for collapse(2)
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            grid[i][j] = newGrid[i][j];
        }
    }
}

// Function to set a cell at specific coordinates to alive
void setCellAlive(int grid[ROWS][COLUMNS], int x, int y) {
    if (x >= 0 && x < ROWS && y >= 0 && y < COLUMNS) {
        grid[x][y] = 1;
    } else {
        printf("Coordinates out of bounds: (%d, %d)\n", x, y);
    }
}

// Function to draw the grid
void drawGrid(int grid[ROWS][COLUMNS]) {
    float cellWidth = WIN_WIDTH / (float)COLUMNS;
    float cellHeight = WIN_HEIGHT / (float)ROWS;

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            if (grid[i][j] == 1) {
                DrawRectangle(j * cellWidth, i * cellHeight, cellWidth, cellHeight, BLACK);
            } else {
                DrawRectangleLines(j * cellWidth, i * cellHeight, cellWidth, cellHeight, GRAY);
            }
        }
    }
}

// Control function for handling GUI and camera interactions
void control(GuiInterfaceState *state, int *gamestate, int camspeed, Camera2D *cam) {
    if (*gamestate) {
        if (state->ProgressValue != 1) {
            state->ProgressValue += 0.5 / FPS;
        } else {
            state->ProgressValue = 0;
        }
    }

    state->XcordValue = cam->offset.x;
    state->YcordValue = cam->offset.y;

    if (IsKeyDown(KEY_W)) cam->offset.y += camspeed;
    if (IsKeyDown(KEY_A)) cam->offset.x += camspeed;
    if (IsKeyDown(KEY_S)) cam->offset.y -= camspeed;
    if (IsKeyDown(KEY_D)) cam->offset.x -= camspeed;
    cam->zoom -= GetMouseWheelMove();

    // Set cell alive on mouse click
    if (IsMouseButtonDown(MOUSE_LEFT_BUTTON)) {
        Vector2 mousePos = GetMousePosition();
        int x = mousePos.y / (WIN_WIDTH / ROWS);
        int y = mousePos.x / (WIN_HEIGHT / COLUMNS);
        setCellAlive(grid, x, y);
    }
}

// Entry point of the application
int main() {
    GuiInterfaceState state;
    Camera2D cam = { {WIN_HEIGHT / 2, WIN_WIDTH / 2}, {0, 0}, 0, 1.0f };
    int gamestate = PAUSE;
    int frameCounter = 0; // Frame counter to control game speed

    InitWindow(WIN_WIDTH, WIN_HEIGHT, "GAME OF LIFE");
    GuiLoadStyle(styles[1]);
    state = InitGuiInterface();
    SetTargetFPS(FPS);

    // Set initial alive cells
    setCellAlive(grid, 2, 3);
    setCellAlive(grid, 3, 4);
    setCellAlive(grid, 4, 2);
    setCellAlive(grid, 4, 3);
    setCellAlive(grid, 4, 4);

    while (!WindowShouldClose()) {
        // Toggle play/pause on GUI button press
        if (state.PlayPressed) gamestate ^= PLAY;

        // Update controls and camera
        control(&state, &gamestate, 10, &cam);

        // Update the grid if the game is in the play state
        if (gamestate == PLAY && frameCounter % 10 == 0) { // Slow down updates
            updateGrid(grid);
        }

        // Drawing section
        BeginDrawing();
        ClearBackground(GetColor(GuiGetStyle(DEFAULT, BACKGROUND_COLOR)));
        BeginMode2D(cam);
        drawGrid(grid); // Draw the current state of the grid
        EndMode2D();
        GuiInterface(&state);
        EndDrawing();

        frameCounter++; // Increment frame counter
    }

    CloseWindow();
    return 0;
}
