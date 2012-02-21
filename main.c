#include <stdio.h>
#include <stdlib.h>

#include "boat.h"

int main(int argc, const char * argv[]) {

  boat_type *fleet_player = NULL;
  boat_type *fleet_AI = NULL;

  fleet_player = createBoat();
  fleet_AI = createBoat();

  return EXIT_SUCCESS;
}
