#include <stdbool.h>
#include <stddef.h>

int ft_pow(int nbr, int pow)
{
    int temp;

    temp = nbr;
    while(pow > 1)
    {
        temp = temp * nbr;
        pow--;
    }
    return (temp);
}


bool array_madness(size_t n1, const int arr1[n1], size_t n2, const int arr2[n2])
{
    size_t  i;
    int resulte_one;
    int resulte_two;

    i = 0;
    resulte_one = 0;
    resulte_two = 0;
    while (i < n1)
    {
        resulte_one = resulte_one + ft_pow(arr1[i], 2);
        i++;
    }
    i = 0;
    while (i < n2)
    {
        resulte_two = resulte_two + ft_pow(arr2[i], 3);
        i++;
    }
    return (resulte_one > resulte_two ? true : false);
}

#include <stdio.h>
int main()
{
    const int arr1[6] = {72, 65, 100, 38, 59, 98};
    const int arr2[4] = {19, 15, 17, 6};
    printf("%d\n", array_madness(6, arr1, 4, arr2));

    return (0);
}