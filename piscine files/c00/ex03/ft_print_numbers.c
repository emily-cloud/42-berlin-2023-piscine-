

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	n;

	n = 48;
	while (n < 58)
	{
		write(1, &n, 1);
		n++;
	}
}
