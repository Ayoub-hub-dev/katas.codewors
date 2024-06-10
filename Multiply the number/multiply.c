#include <math.h>
#include <stdlib.h>
int multiply(int number) {
  int count = 0;
  int num = abs(number);
  
  while (num > 0) {
    count++;
    num = num/10;
  }
  return (number * (int)pow(5, count));
}