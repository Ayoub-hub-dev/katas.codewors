#include <stdio.h>

void reverse_array(int *arr, int size)
{
	int	*start = arr;
	int	*end = arr + size - 1;

	while (start < end)
	{
		int tmp = *start;
		*start = *end;
		*end = tmp;


		start++;
		end--;
	}
}

int main()
{
	int arr[] = {1, 2, 3};
	reverse_array(arr, 3);

	for (int i = 0; i < 3; i++)
		printf("%d", arr[i]);
		
	return (0);
}
