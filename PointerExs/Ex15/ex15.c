#include <stdio.h>

float find_average(int *arr, int size)
{
	int	*end = arr + size;
	int	result = 0;

	while (arr < end){
		result += *arr;
		arr++;
	}
	return ((float)result/size);
}

int main()
{
	int arr[] = {10, 20, 30, 40};
	printf("%fl", find_average(arr, 4));
	return (0);
}

