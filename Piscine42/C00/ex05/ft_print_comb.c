#include <unistd.h>
void ft_print_comb(void)
{
	
	char	i = '0';
	char	x;
	char	y;

	 
	while (i <= '7')
	{
		x = i + 1;
		while (x <= '8')
		{
			y = x + 1;
			while (y <= '9')
			{
				write(1, &i, 1);
				write(1, &x, 1);
				write(1, &y, 1);
				
				if (!(i == '7' && x == '8' && y == '9'))
                    			write(1, ", ", 2);
				y++;
			}
			x++;
		}
		i++;
	}
}

