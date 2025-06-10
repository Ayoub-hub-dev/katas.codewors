#include <stdio.h>


char *ft_strupcase(char *str){
	
	char	*mainstring = str;
	while (*str != '\0')
	{
		if (*str >= 97 && *str <= 122)
			*str = *str - 32;
		str++;
	}
	return (mainstring);
}

int main(){
	char str[] = "ayoub";

	printf("%s", ft_strupcase(str));
	return (0);
}
			
