char* switchItUp(int number)
{   
    char *arr[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    return arr[number];
}

#include <stdio.h>

int main()
{
    int number = 0;
    printf("%s", switchItUp(number));
    return (0);
}