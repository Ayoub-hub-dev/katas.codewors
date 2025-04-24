#include <stdio.h>

int find_max(int *arr, int size)
{
	int	i;
	int	result = 0;

	i = 1;

	while (i < size) {
		if (arr[i] > result)
			result = arr[i];
		i++;
	}
	return (result);
}

int main()
{
    int numbers[] = {5, 14, 3, 7, 9};
    int max = find_max(numbers, 5);
    printf("Max value is: %d\n", max);  // should print: 12
    return 0;
}
