int simple_multiplication(int number)
{
    if (number % 2 == 0)
        return (number * 8);
    else
        return (number * 9);
}
#include <stdio.h>
int main()
{
    printf("%d", simple_multiplication(3));
    return (0);
}