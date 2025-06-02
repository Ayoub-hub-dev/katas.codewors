
#include <stdio.h>
char *ft_strcpy(char *dest, char *src)
{
	char *start = dest;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (start);
}

int main()
{
	char *src = "ayoub";
	char *dest;
	ft_strcpy(dest, src);
	while (*dest != '\0'){
		printf("%c", *dest);
		dest++;
	}
	return (0);
}
