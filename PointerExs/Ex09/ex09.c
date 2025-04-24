#include <stdio.h>
int find_min(int *arr, int size)
{
	int	i;
	int	result;

	i = 0;
	result = arr[0];
	while(i < size)
	{
		if (arr[i] < result)
			result = arr[i];
		i++;
	}
	return (result);
}

int main()
{
	int numbers[] = {5, 2, 7, 9, 6};
	printf("the smaler number is %d\n", find_min(numbers, 5));
	return (0);
}

