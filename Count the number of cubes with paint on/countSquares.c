#include <math.h>
int countSquares(int cuts) {
  int result = 1;
  if (cuts == 0)
    return result;
  return result = pow((cuts + 1), 3) - pow((cuts - 1), 3);
}