#include <stdio.h>

int ft_str_is_numeric(char *str){
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 48 && str[i] <= 57))
			return (0);
		i++;
	}
	return (1);
}

int main()
{
	char *str = "123434";
	printf("%d", ft_str_is_numeric(str));
	return (0);
}
