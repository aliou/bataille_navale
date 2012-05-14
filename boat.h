#ifndef boat_h
#define boat_h

#define NB_BOATS 5
#define GRID_SIZE 10

typedef enum { false, true } bool;
typedef enum { right = 2, left = -2, up = 1, down = -1 } direct_t;

/* Defines a boat
 *
 * name - Name of the boat.
 * x - Abscissa of the boat.
 * y - Ordinate of the boat.
 * direction - Direction of the boat.
 * size - Size of the boat.
 * car - Character symbolizing the boat.
 *
 */
typedef struct {
  char name[255];
  int x, y;
  direct_t direction;
  int size;
  char car;
  // int ptrStruct;

} boat_type;

/* Create an array of boats.
 *
 * Returns the array of boats, as a pointer of boat_type. */
boat_type* createBoat();

/* Position a boat by asking its coordonates to player.
 *
 */
void positioning(char grid[][GRID_SIZE], boat_type *fleet);

bool inBounds(int bounds);

#endif
