#include <stdio.h>

void add(int *a, int *b, int *result)
{
	*result = *a + *b;
}

int main()
{
	int x = 1;
	int y = 2;
	int res;
	add(&x, &y, &res);
	printf("The result is %d", res);
	return (0);
}
