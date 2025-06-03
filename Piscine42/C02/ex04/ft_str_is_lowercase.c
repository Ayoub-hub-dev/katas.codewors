#include <stdio.h>

int ft_str_is_lowercase(char *str){

	if (str == "")
		return (1);
	while (*str)
	{
		if (!(*str >= 97 && *str <= 122))
			return (0);
		str++;
	}
	return (1);
}

int main(){
	char *str = "";
	printf("%d", ft_str_is_lowercase(str));
	return (0);
}
