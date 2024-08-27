/* ------------------------------------------------------------------------------------------
 * Header file generated with rguilayout
 *
 * USAGE:
 *     #define INTERFACE_IMPLEMENTATION
 *     #include interface.h
 *
 *     GuiInterfaceState state = InitGuiInterface();
 *     GuiInterface(&state);
 -------------------------------------------------------------------------------------------*/

#include "raylib.h"
#undef RAYGUI_IMPLEMENTATION
#include "raygui.h"

#include <string.h>

#ifndef INTERFACE_H
#define INTERFACE_H

typedef struct {
    // Define anchors
    Vector2 BottomAnchor;            // ANCHOR ID:1
    Vector2 TopleftAnchor;            // ANCHOR ID:2
    Vector2 ToprightAnchor;            // ANCHOR ID:3
    
    // Define controls variables
    float ProgressValue;            // ProgressBar: Progress
    bool SpeedEditMode;
    int SpeedValue;            // Spinner: Speed
    bool NextPressed;            // Button: Next
    bool PrevPressed;            // Button: Prev
    bool PlayPressed;            // Button: Play
    bool XcordEditMode;
    int XcordValue;            // ValueBOx: Xcord
    bool YcordEditMode;
    int YcordValue;            // ValueBOx: Ycord
    bool ZcordEditMode;
    int ZcordValue;            // ValueBOx: Zcord
    bool CellsEditMode;
    int CellsValue;            // ValueBOx: Cells
    bool GridsEditMode;
    int GridsValue;            // ValueBOx: Grids

    // Custom state variables (depend on development software)
    // NOTE: This variables should be added manually if required

} GuiInterfaceState;

//----------------------------------------------------------------------------------
// Defines and Macros
//----------------------------------------------------------------------------------
//...

//----------------------------------------------------------------------------------
// Types and Structures Definition
//----------------------------------------------------------------------------------
// ...

//----------------------------------------------------------------------------------
// Module Functions Declaration
//----------------------------------------------------------------------------------
GuiInterfaceState InitGuiInterface(void);
void GuiInterface(GuiInterfaceState *state);

#endif // INTERFACE_H

/***********************************************************************************
*
*   INTERFACE IMPLEMENTATION
*
************************************************************************************/
#if defined(INTERFACE_IMPLEMENTATION)

#include "raygui.h"

//----------------------------------------------------------------------------------
// Global Variables Definition
//----------------------------------------------------------------------------------
//...

//----------------------------------------------------------------------------------
// Internal Module Functions Definition
//----------------------------------------------------------------------------------
//...

//----------------------------------------------------------------------------------
// Module Functions Definition
//----------------------------------------------------------------------------------
GuiInterfaceState InitGuiInterface(void)
{
    GuiInterfaceState state = { 0 };

    // Init anchors
    state.BottomAnchor = (Vector2){ 504, 736 };            // ANCHOR ID:1
    state.TopleftAnchor = (Vector2){ 24, 32 };            // ANCHOR ID:2
    state.ToprightAnchor = (Vector2){ 680, 32 };            // ANCHOR ID:3
    
    // Initilize controls variables
    state.ProgressValue = 0.0f;            // ProgressBar: Progress
    state.SpeedEditMode = false;
    state.SpeedValue = 0;            // Spinner: Speed
    state.NextPressed = false;            // Button: Next
    state.PrevPressed = false;            // Button: Prev
    state.PlayPressed = false;            // Button: Play
    state.XcordEditMode = false;
    state.XcordValue = 0;            // ValueBOx: Xcord
    state.YcordEditMode = false;
    state.YcordValue = 0;            // ValueBOx: Ycord
    state.ZcordEditMode = false;
    state.ZcordValue = 0;            // ValueBOx: Zcord
    state.CellsEditMode = false;
    state.CellsValue = 0;            // ValueBOx: Cells
    state.GridsEditMode = false;
    state.GridsValue = 0;            // ValueBOx: Grids

    // Custom variables initialization

    return state;
}

void GuiInterface(GuiInterfaceState *state)
{
    // Draw controls
    GuiProgressBar((Rectangle){ state->BottomAnchor.x + -312, state->BottomAnchor.y + 56, 624, 24 }, NULL, NULL, &state->ProgressValue, 0, 1);
    if (GuiSpinner((Rectangle){ state->BottomAnchor.x + -72, state->BottomAnchor.y + 24, 144, 24 }, NULL, &state->SpeedValue, 0, 100, state->SpeedEditMode)) state->SpeedEditMode = !state->SpeedEditMode;
    state->NextPressed = GuiButton((Rectangle){ state->BottomAnchor.x + 80, state->BottomAnchor.y + 24, 48, 24 }, "NEXT"); 
    state->PrevPressed = GuiButton((Rectangle){ state->BottomAnchor.x + -136, state->BottomAnchor.y + 24, 56, 24 }, "PREV"); 
    state->PlayPressed = GuiButton((Rectangle){ state->BottomAnchor.x + -48, state->BottomAnchor.y + 72, 96, 24 }, "PLAY"); 
    if (GuiValueBox((Rectangle){ state->TopleftAnchor.x + 24, state->TopleftAnchor.y + 32, 72, 16 }, "X ", &state->XcordValue, 0, 100, state->XcordEditMode)) state->XcordEditMode = !state->XcordEditMode;
    if (GuiValueBox((Rectangle){ state->TopleftAnchor.x + 120, state->TopleftAnchor.y + 32, 72, 16 }, "Y ", &state->YcordValue, 0, 100, state->YcordEditMode)) state->YcordEditMode = !state->YcordEditMode;
    if (GuiValueBox((Rectangle){ state->TopleftAnchor.x + 216, state->TopleftAnchor.y + 32, 72, 16 }, "Z ", &state->ZcordValue, 0, 100, state->ZcordEditMode)) state->ZcordEditMode = !state->ZcordEditMode;
    GuiGroupBox((Rectangle){ state->TopleftAnchor.x + 0, state->TopleftAnchor.y + 24, 304, 32 }, "CORDINATES");
    GuiGroupBox((Rectangle){ state->ToprightAnchor.x + 0, state->ToprightAnchor.y + 24, 304, 32 }, "SACE");
    if (GuiValueBox((Rectangle){ state->ToprightAnchor.x + 48, state->ToprightAnchor.y + 32, 120, 16 }, "CELLS ", &state->CellsValue, 0, 100, state->CellsEditMode)) state->CellsEditMode = !state->CellsEditMode;
    if (GuiValueBox((Rectangle){ state->ToprightAnchor.x + 216, state->ToprightAnchor.y + 32, 72, 16 }, "GRIDS ", &state->GridsValue, 0, 100, state->GridsEditMode)) state->GridsEditMode = !state->GridsEditMode;
    GuiStatusBar((Rectangle){ 0, 0, 1008, 32 }, "LIFE");
}

#endif // INTERFACE_IMPLEMENTATION
