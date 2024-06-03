#include <stddef.h>

int grow(size_t size, const int arr[size]) {
  
  int result = 1;
  size_t i = 0;
  
  while (i < size)
    {
      result = result * arr[i];
      i++;
  }
  return result;
}