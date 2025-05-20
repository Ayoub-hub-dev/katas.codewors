#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
	int	i = 0;
	int tmp;


	while (i < (size / 2))
	{
		tmp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = tmp;
		i++;
	}
}

int main()
{
	int tab[] = {1, 2, 3, 4, 5, 6, 7};
	ft_rev_int_tab(tab, 7);
	for (int i = 0; i < 7; i++)
	{
		printf("%d", tab[i]);
	}
	return (0);
}

