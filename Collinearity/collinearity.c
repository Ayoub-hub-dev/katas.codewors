#include <stdbool.h>

bool collinearity(int x1, int y1, int x2, int y2)
{
    return (x1 * y1 == x2 * y2);
}
#include <stdio.h>
int main()
{
    int x1 = 1;
    int y1 = 1;
    int x2 = 1;
    int y2 = 1;
    printf("%s",collinearity(x1, y1, x2, y2) ? "true" : "false");
    return (0);
}