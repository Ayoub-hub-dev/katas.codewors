#include <unistd.h>
void ft_print_reverse_alphabet(void)
{
	char start = 'z';
	char end = 'a';

	while (start >= end)
	{
		write(1, &start, 1);
		start--;
	}
}
