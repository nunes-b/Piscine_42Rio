/*#include <unistd.h>
#include <stdio.h>*/

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		write(1, &str[index], 1);
		index++;
	}
}
/*int main()
{
	char ptr1[] = "Hello";

	int index = 0;
	
	printf("%c\n", ptr1[0]);
}*/
