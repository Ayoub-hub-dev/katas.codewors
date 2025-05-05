#include <stdio.h>

void copy_array(int *src, int *dest, int size)
{
	int *i = src + size;
	while(src < i)
	{
		*dest = *src;
		src++;
		dest++;
	}
}

int main()
{
	int src[] = {1, 5, 8, 2, 3};
	int dest[5];
	copy_array(src, dest, 5);
	for (int i = 0;i < 5; i++){
		printf("%d", dest[i]);
	}
	return (0);
}
