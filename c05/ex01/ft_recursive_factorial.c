int	ft_recursive_factorial(int nb)
{
	int	result;

	if (nb < 0)
	{
		return (0);
	}
	if (nb <= 1)
	{
		return (1);
	}
	result = nb * ft_recursive_factorial(nb -1);
	return (result);
}
/*
#include <stdio.h>
int	main()
{
	int	num;

	num = 2;
	printf("%d\n",ft_recursive_factorial(num));
}*/
