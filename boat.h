#ifndef boat_h
#define boat_h

#define NB_BOATS 5

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
  int direction;
  int size;
  char car;
  // int ptrStruct;

} boat_type;

/* Create an array of boats.
 *
 * Returns the array of boats, as a pointer of boat_type. */
boat_type* createBoat();

#endif
