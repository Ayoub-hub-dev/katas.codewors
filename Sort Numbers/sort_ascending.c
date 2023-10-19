#include <stddef.h>
void sort_ascending (size_t length, int array[length])
{
    size_t      i;
    size_t      j;
    int     swap;

    i = 0;
    while (i < length)
    {
        j = i + 1;
        while (j < length)
        {
            if (array[i] > array[j])
            {
                swap = array[i];
                array[i] = array[j];
                array[j] = swap;
            }
            j++;
        }
        i++;
    }
}
#include <stdio.h>

int main()
{
    int array[4] = {-8, 3, -30, 3};
    sort_ascending(4, array);
    printf("%d %d %d %d", array[0], array[1], array[2], array[3]);
    return (0);
}