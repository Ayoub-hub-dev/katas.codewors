#include <stdio.h>


unsigned int ft_strlcpy(char *dest, char *src, unsigned int size){
	
	unsigned int length = 0;
	unsigned int i = 0;

	// cpying up to size - 1 from src to dest.
	if (size > 0)
	{
		while ( i < size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}

	// counting the length of src.
	while (src[length] != '\0')
		length++;
	return (length);
}


int main(){
	char *dest;
	printf("%d", ft_strlcpy(dest, "Ayoub", 20));
	return (0);
}
	
