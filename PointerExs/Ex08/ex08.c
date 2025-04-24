#include <stdio.h>

void reverse_array(int *arr, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		arr[i] = arr[size - 1 - i];
		i++;
	}
}

int main()
{
	int number[] = {1, 2, 3, 4, 5};
	int size = 5;
	int i = 0;
	reverse_array(number, size);
	

	while (i < size)
	{
		printf("%d", number[i]);
		i++;
	}
	return (0);
}
	
