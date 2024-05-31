#include <stddef.h>
#include <stdio.h>
void invert(int *values, size_t values_size)
{
    size_t     i;

    i = 0;
    while (i < values_size)
    {
        values[i] *= -1;
        i++;
    }
}


// int main()
// {
//     int values[4] = {1, -2, 3, 4};
//     size_t values_size = 4;
//     invert(values, values_size);
//     printf("%d%d%d%d", values[0], values[1], values[2], values[3]);
//     return (0);
// }

