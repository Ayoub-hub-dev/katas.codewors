#include <stdlib.h>
const char* elevator(int left, int right, int call) {
  return abs(call - left) < abs(call - right) ? "left" : "right";
}