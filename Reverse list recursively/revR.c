int* revR (int* array, int n)
{
    int     i;
    int     swap;

    i = 0;
    if (n == 0)
        return (array);
    while (i < n / 2)
    {
        swap = array[i];
        array[i] = array[n - 1 - i];
        array[n - 1 - i] = swap;
        i++;
    }
    return (array);
}
#include <stdio.h>
int main()
{
    int array[] = {1, 2, 5, 6, 7};
    revR(array, 5);
    printf("%d %d %d %d %d", array[0], array[1], array[2], array[3], array[4]);
    return (0);
}