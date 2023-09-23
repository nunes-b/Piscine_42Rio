/*#include<stdio.h>
#include<unistd.h>*/

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	return (index);
}

/*int main(void)
{
	int string;
	string = ft_strlen("TestE");
	printf("%i", string);
	return(0);
}*/
