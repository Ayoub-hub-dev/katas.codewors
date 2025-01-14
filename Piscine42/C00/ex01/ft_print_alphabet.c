#include <unistd.h>
void ft_print_alphabet(void) 
{
	char	start = 'a';
	char	end = 'z';

	while (start <= end)
	{
		write(1, &start, 1);
		start++;
	}
}
