
const char *evil(int value)
{
    int count;

    while (value > 0)
    {
        if (value % 2 == 1)
            count++;
        value /= 2;
    }
    if (count % 2 == 0)
        return ("It's Evil!");
    else
        return ("It's Odious!");
}
#include <stdio.h>
int main()
{
    int num = 1;
    printf("%s\n", evil(num));
    return (0);
}