#include <stdlib.h>
#include <stdio.h>

int *distinct(const int *values, size_t count, size_t *pResultCount) {
    // Please make sure you store the number of distinct values
    // in the memory pointed to by pResultCount. If values == NULL 
    // or count == 0, then *pResultCount == 0.

    pResultCount = (int *)malloc(count * sizeof(int));

    if (values == NULL || count == 0)
        return (pResultCount = 0);

    size_t i = 0;

    while (i < count) {
        pResultCount[i] = values[i];
        i++;
    }
    return (pResultCount);
}


