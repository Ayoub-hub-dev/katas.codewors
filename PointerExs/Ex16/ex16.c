#include <stdio.h>

int *find_first_even(int *arr, int size){
	int *end = arr + size;

	while (arr < end)
	{
		if (*arr % 2 == 0)
			return (arr);
		arr++;
	}
	return (NULL);
}

int main()
{
	int nums[] = {7, 9, 11, 13, 3};
	printf("%d\n", *find_first_even(nums, 5));
	return (0);
}
