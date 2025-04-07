void set_to_99(int *num)
{
	*num = 99;
}
#include <stdio.h>
int main()
{
	int x = 0;
	set_to_99(&x);
	printf("%d\n", x);
	return (0);
}
