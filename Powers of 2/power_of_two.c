#include <inttypes.h>
#include <stddef.h>
#include <math.h>

void powers_of_two (size_t n, uint64_t powers[n + 1])
{
    size_t i = 0;
    while (i <= n) {
      powers[i] = pow(2, i);
      i++;
    }
    powers[i] = '\0';
}