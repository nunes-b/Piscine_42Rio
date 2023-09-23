/*#include <unistd.h>
#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main(){
	int x;
	int y;
	int value1;
	int rest1;
	value1 = 10;
	rest1 = 3;

	ft_div_mod(value1,rest1 , &x, &y);
	printf("A divisão de %d\nPor: %d\né %d\nE sobra %d\n",value1, rest1,x , y);
}*/
