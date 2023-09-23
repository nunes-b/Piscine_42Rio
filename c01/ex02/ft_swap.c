/*#include <unistd.h>
#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*int	main(void)
{
	int a;
	int b;
	
	a = 1;
	b = 2;	
	ft_swap(&a, &b);
	printf("O valor de A é: %d\n :""E o valor de B é: %d\n" ,a , b);
}*/
