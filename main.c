#include <stdio.h>
#include <stdlib.h>

#include "boat.h"

#define GRID_SIZE 10

int main(int argc, const char * argv[]) {

  int i, j;
  boat_type *fleet_player = NULL;
  boat_type *fleet_AI = NULL;

  fleet_player = createBoat();
  fleet_AI = createBoat();

  char grid_player[GRID_SIZE][GRID_SIZE];
  char grid_boat_player[GRID_SIZE][GRID_SIZE];

  char grid_AI[GRID_SIZE][GRID_SIZE];
  char grid_boat_AI[GRID_SIZE][GRID_SIZE];

  for (i = 0 ; i < GRID_SIZE ; i++) {
    for (j = 0; j < GRID_SIZE; j++) {
      grid_player[i][j] = '~';
      grid_boat_player[i][j] = '~';
      grid_AI[i][j] = '~';
      grid_boat_AI[i][j] = '~';
    }
  }

  positioning(grid_boat_player, fleet_player);

  return EXIT_SUCCESS;
}
