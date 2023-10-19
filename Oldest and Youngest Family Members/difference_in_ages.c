#include <stdlib.h>
#include <stddef.h>
// you can use ready functions to make it easy
int *new_array(size_t len, const int array[len])
{
    size_t i;
    

    i = 0;
    int *ptr = (int *)malloc(len * sizeof(int));

    if (ptr == NULL)
        return (NULL);

    while (i < len)
    {
        ptr[i] = array[i];
        i++;
    }
    return (ptr);
}

int *array_sorting(size_t length, int *array)
{
    size_t  i;
    size_t  j;
    int     swap;

    i = 0;
    while (i < length - 1)
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
    return (array);
}

int *difference_in_ages(size_t a, const int ages[a])
{
    int *array = new_array(a, ages);
    int *new_arr = array_sorting(a, array);
    int *resulte = (int *)malloc(3 * sizeof(int));

    if (resulte == NULL)
    {
        free(array);
        free(new_arr);
        return NULL; // Memory allocation failed
    }
    
    resulte[0] = new_arr[0];
    resulte[1] = new_arr[a - 1];
    resulte[2] = new_arr[a - 1] - new_arr[0];
    
    return (resulte);
    free(new_arr);
    free(array);
}
#include <stdio.h>

int main()
{
    const int ages[] = {35, 25, 42, 18, 55}; // Sample array of ages

    size_t len = sizeof(ages) / sizeof(ages[0]);

    int *result = difference_in_ages(len, ages);

    if (result == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Smallest Age: %d\n", result[0]);
    printf("Largest Age: %d\n", result[1]);
    printf("Age Range: %d\n", result[2]);

    free(result); // Don't forget to free the allocated memory

    return 0;
}
