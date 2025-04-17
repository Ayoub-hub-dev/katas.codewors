#include <stdio.h>

void reverse(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main()
{
	int x = 10;
	int y = 20;
	reverse(&x, &y);
	printf("x = %d y = %d", x, y);
	return (0);
}

