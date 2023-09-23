#include <unistd.h>

void	ft_is_negative(int n)
{
	char	ng;
	char	p;

	p = 'P';
	ng = 'N';
	if (n >= 0)
	{
		write(1, &p, 1);
	}
	else
	{
		write(1, &ng, 1);
	}
}
