#include <stdio.h>
#include <math.h>
#include <stdlib.h>
double round_f(double number)
{
    double number2 = floor(number);
    if (number >= 0)
    {   
        if ((number - number2) >= 0.5)
            return ceil(number);
        return (floor(number));
    }
    if (number < 0)
    {
        if (fabs(number - number2) <= 0.5)
            return floor(number);
        return (ceil(number));
    }
}

int main(void)
{
    double num = 3.5;
    printf("%.0f", round_f(num));
}