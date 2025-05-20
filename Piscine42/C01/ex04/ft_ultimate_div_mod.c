#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
	int tmp = *a;

	*a = *a / *b;
	*b = tmp % *b;
}

int main()
{
	int a = 6;
	int b = 2;
	ft_ultimate_div_mod(&a, &b);
	printf("a = %d and b = %d", a, b);
	return (0);
}
