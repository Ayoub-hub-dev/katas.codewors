#include <stdio.h>

char *ft_strlowcase(char *str){
	char	*mainstring = str;

	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
			*str = *str + 32;
		str++;
	}
	return (mainstring);
}

int main()
{
	char str[] = "AYOUBayoub";
	printf("%s\n", ft_strlowcase(str));
	return (0);
}
