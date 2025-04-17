#include <stdio.h>

void set_to_21(int **nbr)
{
	int x = 21;
	int *nb = &x;
	**nbr = *nb;
}

int main()
{
	int x = 0;
	int *p = &x;
	set_to_21(&p);

	printf("%d\n", x);
	return (0);
}
