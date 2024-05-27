int pow_f(int number, int power)
{   
    int i, result = 1;

    i = 0;

    if (power == 0)
        return(1);
         
    while(i < power)
    {   
        result = result * number;
        i++;
    }
    return (result);
}
/*
#include <stdio.h>

int main() 
{
    int number = 26;
    int power = 5;
    printf("%d", pow_f(number, power));
    return (0);
}
*/