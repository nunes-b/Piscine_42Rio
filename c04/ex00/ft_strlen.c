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

/*#include <stdio.h>
int	main()
{
	char str[] = "aaaaaaaaaaaaaaaaaaa";
	printf("%d\n", ft_strlen(str));
}*/
