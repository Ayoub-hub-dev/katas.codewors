#include <stdio.h>

int ft_str_is_printable(char *str){

	if (*str == '\0')
		return (1);
	while (*str){
		if (!(*str >= 32 && *str <= 126))
			return (0);
		str++;
	}
	return (1);
}

int main(){
	char *str = " Ayou931";
	printf("%d", ft_str_is_printable(str));
	return (0);
}
