#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main()
{
	int div;
	int mod;
	ft_div_mod(6, 2, &div, &mod);
	printf("div = %d and mod = %d", div, mod);
	return (0);
}
