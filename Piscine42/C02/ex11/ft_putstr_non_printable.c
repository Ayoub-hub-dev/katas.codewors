#include <unistd.h>

// create a helper function to check if the character is printable or no

int is_printable(char c){
	return (c >= 32 && c <= 126);
}


// create a helper function to print the character.

void ft_putchar(char c){
	write(1, &c, 1);
}


// print a caracter in hex format.

void ft_chartohex(char character){
	char *hex = "0123456789abcdef";

	ft_putchar('\\');
	ft_putchar(hex[character / 16]);
	ft_putchar(hex[character % 16]);
}

// main function.
void ft_putstr_non_printable(char *str){
	
	while (*str){
		if (is_printable(*str))
			ft_putchar(*str);
		else
			ft_chartohex(*str);
		str++;
	}
}

int main() {
    ft_putstr_non_printable("Coucou\ntu vas bien ?");
    return 0;
}
