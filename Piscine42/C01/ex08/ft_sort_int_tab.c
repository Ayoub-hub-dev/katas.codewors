#include <stdio.h>

void ft_sort_int_tab(int *tab, int size){
	int	i = 0;
	int 	j;
	int	tmp;

	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}


int main(){
	int tab[] = {9, 3, 2, 6};
	ft_sort_int_tab(tab, 4);
	for (int i = 0; i < 4; i++){
		printf("%d", tab[i]);
	}
	return (0);
}
