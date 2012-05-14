#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "boat.h"

#define DEBUG

bool inBounds(int bound) {
  return bound < GRID_SIZE && bound >= 0;
}

/* Create an array of boats.
 *
 * This creates an array of boats and defines their names, symbolizing
 * character and size.
 *
 * Returns a pointer to the first boat in the array, as a pointer of
 * boat_type. */
boat_type* createBoat() {
  boat_type *fleet = (boat_type*) malloc( 5*sizeof(boat_type) );

  strcpy(fleet[0].name, "Aircraft carrier");
  fleet[0].car = 'a';
  fleet[0].size = 5;

#ifdef DEBUG
  printf("%s\n", fleet[0].name);
#endif

  strcpy(fleet[1].name, "Submarine");
  fleet[1].car = 's';
  fleet[1].size = 3;

#ifdef DEBUG
  printf("%s\n", fleet[1].name);
#endif

  strcpy(fleet[2].name, "Battleship");
  fleet[2].car = 'b';
  fleet[2].size = 4;

#ifdef DEBUG
  printf("%s\n", fleet[2].name);
#endif

  strcpy(fleet[3].name, "Destroyer");
  fleet[3].car = 'd';
  fleet[3].size = 3;

#ifdef DEBUG
  printf("%s\n", fleet[3].name);
#endif

  strcpy(fleet[4].name, "Patrol Boat");
  fleet[4].car = 'p';
  fleet[4].size = 2;

#ifdef DEBUG
  printf("%s\n", fleet[4].name);
#endif
}

void positioning(char grid[][GRID_SIZE], boat_type *fleet) {
  int i, j, k;
  int x, y, d;

  for (i = 0; i < NB_BOATS; i++) {
    for (j = 0; j < GRID_SIZE ; j++) {
      for (k = 0; k < GRID_SIZE; k++) {
        printf(" %c ", grid[j][k]);
      }
      printf("\n");
    }
    printf("Position for the boat \"%s\".\n", fleet[i].name);

    printf(" ======> x : ");
    scanf("%d", &x);

    printf(" ======> y : ");
    scanf("%d", &y);

    printf(" Direction for the boat \n");
    printf(" Right: 2, Left: -2, Up: 1, Down: -1\n");

    printf(" ======> d: ");
    scanf("%d", &d);


  }
}
