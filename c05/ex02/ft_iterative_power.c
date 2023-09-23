int	ft_iterative_power(int nb, int power)
{
	int	tmp_nb;

	tmp_nb = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		tmp_nb = tmp_nb * nb;
		power--;
	}
	return (tmp_nb);
}
/*
#include <stdio.h>
int	main()
{
	int	number;
	int	power;

	power = 3;
	number = 2;
	printf("%d\n", ft_iterative_power(number, power));
}
*/
