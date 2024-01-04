#include <stdbool.h>

bool better_than_average(const int class_points[], int class_size, int your_points) {
    int     count;
    int     i;
  
    count = 0;
    i = 0;
    while (i < class_size)
    {
        count = count + class_points[i];
        i++;
    }
    if (your_points > (count / class_size))
        return (true);
    return false;
}