
#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int 	i = 0;

	// coped the src into dest.
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}

	//pad with null bytes if src less than n
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}


	return (dest);
}

int main()
{
    char *dest;
    printf("Copied: %s\n", ft_strncpy(dest, "He", 4));
    return 0;
}
