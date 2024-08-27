#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <omp.h>

#include "parse.h"
#include "life.h"

#define BUFFER_SIZE 1024
#define PATH_SIZE 255
#define DATA_DIR "/data"
#define COMMENT '!'
#define NEWLINE '\n'

char fbuffer[BUFFER_SIZE];

void parsepattern(char *s, int size) {
  int i, x, y;
  for (i = 0; i <= size; i++) {
    if (s[i] == NEWLINE) {
      x++;
      if (s[i] == '.' || s[i] == ',' || s[i] == ' ') {
	
      } else {
	
      }
    }
    y++;
  }
}

int getpattern(char *fname)
{
  long bsize, fsize, fpos;
  char c, chunk, in;
  FILE *f;

  /* Open pattern file */
  char dir[PATH_SIZE] = DATA_DIR;
  strncat(dir, fname, 20);
  f = fopen(fname, "r");
  if (!f) return 1;

  fseek(f, 0, SEEK_END);
  fsize = ftell(f);
  fseek(f, 0, SEEK_SET);
  
  /* Parse comment lines */
  while ((c = fgetc(f)) == COMMENT) {
    while ((c = fgetc(f)) != NEWLINE);
  }
  
  /* Parse file in chunks */
  while (fpos < fsize) {
    bsize = fread(fbuffer, 1, BUFFER_SIZE, f);
    fpos = ftell(f);
    parsepattern(fbuffer, bsize);
  }
  
  fclose(f);
  return 0;
}

