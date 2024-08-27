#ifndef LIFE_H
#define LIFE_H

/* This header file describes structs that generalize outer totalistic
 * rules of cellular automatons in regular and monohedral tessellations
 * with Moore and Von Neumann neighborhoods.
 */

/* 🖲️ Algorithms, heuristics and preset rules */
static const char *algo[]       = {"simple", "quick", "hash"};
static const char *heuristic[]  = {"serial", "parallel"};
static const char *rulepreset[] = {"life", "highlife", "eva"};

/* 🧭 Boundary types that dictate cell state out of bounds */
static const char *boundary[]   = {"fixed", "adiabatic", "reflective", "periodical"};

/* 📐 Geometry that makes up the lattice */
enum { TRIG, SQUARE, PEN, HEX };

/* ☄ Group of cells in the same locality */
typedef struct {
  int x, y;               /* Position of grid in space */
  unsigned int size;      /* Grid size */
  unsigned char cells[];  /* Array of cells that contain their state and neighborhood */
} Grid;

void getgrid();           /* Make a change */
Grid *segregate();        /* Segregate grid into new grid */

/* 🧬 Tessellation properties */
typedef struct {
  int *sides;   /* Number of sides */
  int *vertex;  /* Array of possible number of vertex that meet */
} Tess;

/* 🪐 Spatial properties of the universe and it's contents */
typedef struct {
  int block, chess;     /* Manhattan and Chebyshev distances that make up neighborhood */
  int birth, survival;  /* Neighborhood count for cell birth and survial */
  int segregation;      /* Threshold for grid segregation */
  int width, height;    /* Bound size */
  int boundary;         /* Type of boundary used */
  char *topology;       /* Topology wrapped by space */
  Tess monotess;       /* Space tiling used */
  Grid grids[];         /* Array of cell grids in space */
} Space;

void conf(int algorithm, int heuristic);  /* Set game rules, algorithm and heuristic */
Grid *evolve(Grid *grid);              /* Compute next generations of all grids */

#endif
