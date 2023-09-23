int	ft_sqrt(int nb)
{
	int	a;

	a = 1;
	while (a * a < nb && a < nb)
		a++;
	if (a * a == nb)
		return (a);
	else
		return (0);
}
/*
#include <stdio.h>
int     main ()
{
        int     ft_sqrt();

        printf ("%i\n", ft_sqrt(9));
        printf ("%i\n", ft_sqrt(121));
        printf ("%i\n", ft_sqrt(144));

}*/
