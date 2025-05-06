#include <stdio.h>

int count_even(int *arr, int size)
{
	int	count;
	int	*end = arr + size;

	count = 0;
	while (arr < end){
		if (*arr % 2 == 0)
			count++;
		arr++;
	}
	return (count);
}

int main()
{
	int arr[] = {4, 7, 10, 3, 8};
	printf("%d", count_even(arr, 5));
	return (0);
}

