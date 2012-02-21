#include "boat.h"

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#define DEBUG

/* Create an array of boats.
 * 
 * This creates an array of boats and defines their names, symbolizing
 * character and size.
 *
 * Returns a pointer to the first boat in the array, as a pointer of 
 * boat_type. */
boat_type* createBoat() {
  boat_type *flotte = (boat_type*) malloc( 5*sizeof(boat_type) );

  strcpy(flotte[0].name, "Aircraft carrier");
  flotte[0].car = 'a';
  flotte[0].size = 5;

#ifdef DEBUG
  printf("%s\n", flotte[0].name);
#endif

  strcpy(flotte[1].name, "Submarine");
  flotte[1].car = 's';
  flotte[1].size = 3;

#ifdef DEBUG
  printf("%s\n", flotte[1].name);
#endif

  strcpy(flotte[2].name, "Battleship");
  flotte[2].car = 'b';
  flotte[2].size = 4;

#ifdef DEBUG
  printf("%s\n", flotte[2].name);
#endif

  strcpy(flotte[3].name, "Destroyer");
  flotte[3].car = 'd';
  flotte[3].size = 3;

#ifdef DEBUG
  printf("%s\n", flotte[3].name);
#endif

  strcpy(flotte[4].name, "Patrol Boat");
  flotte[4].car = 'p';
  flotte[4].size = 2;

#ifdef DEBUG
  printf("%s\n", flotte[4].name);
#endif


}
