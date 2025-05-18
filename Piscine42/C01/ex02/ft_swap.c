#include <stdio.h>


void ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main()
{
	int a  = 3;
	int b = 4;

	ft_swap(&a, &b);
	printf("a = %d and b = %d", a, b);
	return (0);
}

