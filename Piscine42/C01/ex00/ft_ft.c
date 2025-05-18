void	ft_ft(int *nbr)
{
	int nbrt = 42;
	*nbr = &nbrt;
}
#include <stdio.h>
int main()
{
	int nbr = 2;
	ft_ft(nbr);
	printf("%d", nbr);
	return (0);
}
