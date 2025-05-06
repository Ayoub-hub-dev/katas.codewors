#include <stdio.h>

int count_greater_than(int *arr, int size, int threshold)
{
	int	*end = arr + size;
	int	result = 0;

	while (arr < end){
		if (*arr > threshold)
			result++;
		arr++;
	}
	return (result);
}

int main()
{
	int arr[] = {1, 3, 25, 5, 30, 21, 20};
	printf("There's %d number's in the provided array greater than %d", count_greater_than(arr, 7, 20), 20);
	return (0);
}
