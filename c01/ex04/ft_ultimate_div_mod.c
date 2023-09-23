/*#include <unistd.h>
#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	rest;

	div = *a / *b;
	rest = *a % *b;
	*a = div;
	*b = rest;
}

/*int main(){

	int x;
	int y;
	int *ptr;
	int *ptr1;

	ptr = &x;
	ptr1 = &y;

	x = 10;
	y = 3;

	ft_ultimate_div_mod(ptr, ptr1);
	printf("A divisão é: %d e restou...%d! ",*ptr,*ptr1 );
	return (0);
}*/
