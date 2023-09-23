int	ft_recursive_power(int nb, int power)
{
	int	tmp_nb;
	int	result;

	tmp_nb = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = nb * ft_recursive_power(nb, power -1);
	return (result);
}
/*
#include <stdio.h>
int	main()
{
	int	number;
	int	power;

	power = 3;
	number = 2;
	printf("%d\n", ft_recursive_power(number, power));
}
*/
