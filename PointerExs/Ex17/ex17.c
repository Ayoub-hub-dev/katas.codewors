#include <stdio.h>

void replace_negatives(int *arr, int size)
{
	int	*end = arr + size;

	while (arr < end){
		if (*arr < 0)
			*arr = 0;
		arr++;
	}
}

int main()
{
	int arr[] = {3, -2, 5, -7, 0};
	replace_negatives(arr, 5);
	for (int i = 0; i < 5; i++){
		printf("%d", arr[i]);
	}
	return (0);
}
