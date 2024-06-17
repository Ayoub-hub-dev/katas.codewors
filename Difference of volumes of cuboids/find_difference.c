#include <stdlib.h>

int find_difference(const int a[3], const int b[3]) {
    int count_a = a[0] * a[1] * a[2];
    int count_b = b[0] * b[1] * b[2];
    return labs(count_a - count_b);
}