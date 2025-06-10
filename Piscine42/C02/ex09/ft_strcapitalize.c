#include <stdio.h>

char *ft_strcapitalize(char *str)
{
	char *original = str;
	if (str[0] >= 97 && str[0] <= 122)
		str[0] = str[0] - 32;
	while (*str != '\0')
	{
		if (*str >= 32 && *str <= 47){
			if (*(str + 1) >= 97 && *(str + 1) <= 122)
					*(str + 1) = *(str + 1) - 32;
			
		}
		str++;
	}
	return (original);
}

int main(){
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n", ft_strcapitalize(str));
	return (0);
}



