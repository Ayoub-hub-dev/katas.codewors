int same_case(char a, char b)
{
    if (((a >= 'a' && a <= 'z') && (b >= 'a' && b <= 'z'))
        || ((a >= 'A' && a <= 'Z') && (b >= 'A' && b <= 'Z')))
        return (1);
    else if (((a >= 'a' && a <= 'z') && (b >= 'A' && b <= 'Z')) 
        || ((a >= 'A' && a <= 'Z') && (b >= 'a' && b <= 'z')))
        return 0;
    else 
        return (-1);
}
#include <stdio.h>
int main()
{
    printf("%d", same_case('A', 'W'));
    return (0);
}