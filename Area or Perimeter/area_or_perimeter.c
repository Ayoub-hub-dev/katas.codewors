int area_or_perimeter(int l , int w)
{
    return l != w ? (l + w) * 2 : l * w;
}
/*
#include <stdio.h>

int main()
{
    int l, w;

    l = 6;
    w = 10;
    printf("%d", area_or_perimeter(l, w));
    return (0);
}
*/