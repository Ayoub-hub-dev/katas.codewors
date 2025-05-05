#include <stdio.h>

int sum_array(int *arr, int size)
{
	int	result = 0;
	int	*end  = arr + size;
	while (arr < end)
	{
		result = result + *arr;
		arr++;
	}
	return (result);
}

int main()
{
	int num[] = {1, 10, -2, 3, 3};
	printf("%d", sum_array(num, 5));
	return (0);
}
