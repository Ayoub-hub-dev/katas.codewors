#include <stdbool.h>
#include <math.h>

bool cube_checker(int volume, int side) {

    return side > 0 && volume > 0 && pow(side, 3) == volume ? true : false;
}