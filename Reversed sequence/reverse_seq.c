#include <stdlib.h>

unsigned short *reverse_seq(unsigned short num)
{
    unsigned short *array_of_numbers = (unsigned short *)malloc(num * sizeof(unsigned short));
    
    if (array_of_numbers == NULL) {
        return NULL;
    }

    unsigned short i = 0;
    while (num > 0) {
      array_of_numbers[i] = num;
      num--;
      i++;
    }
    return array_of_numbers;
}