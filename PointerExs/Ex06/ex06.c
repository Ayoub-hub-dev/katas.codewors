#include <stdio.h>

void fill_array(int *arr, int n)
{
	int	i;

	i = 0;
	while (i <= n)
	{
		arr[i] = i + 1;
		i++;
	}
}

int main()
{
	int arr[5];
	fill_array(arr, 5);

	for (int i = 0; i < 5; i++)
    	{
        	printf("%d ", arr[i]);  // should print: 1 2 3 4 5
    	}

    	return (0);
}
