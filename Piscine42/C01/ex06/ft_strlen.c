#include <stdio.h>

int ft_strlen(char *str)
{
	int	i = 0;

	while(str[i] != '\0')
		i++;

	return (i);
}

int main()
{
	char *string = "Ayoub";
	printf("%d", ft_strlen(string));
	return (0);
}
