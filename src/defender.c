// Standard headers
#include <stdio.h>
#include <stdlib.h>

// Internal headers
#include "direction.h"
#include "position.h"
#include "spy.h"

// Main header
#include "defender.h"

// Macros
#define UNUSED(x) (void)(x) // Auxiliary to avoid error of unused parameter

/*----------------------------------------------------------------------------*/
/*                              PUBLIC FUNCTIONS                              */
/*----------------------------------------------------------------------------*/

direction_t execute_defender_strategy(
    position_t defender_position, Spy attacker_spy) {
  // TODO: unused parameters, remove these lines later
  UNUSED(defender_position);
  UNUSED(attacker_spy);
  srand(time(NULL));

  // TODO: Implement Defender logic here
  return (direction_t) {(int)(rand()%2 - 1), (int)(rand() %1 - 1)};
}

/*----------------------------------------------------------------------------*/
