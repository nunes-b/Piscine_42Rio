char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*
#include <unistd.h>
#include <stdio.h>
int	main()
{
	char	str[] = "ola tudo bem";
	char	str1[]= "ola, tudo beleza";
	
	printf("%s\n", ft_strupcase(str));
	printf("%s\n", ft_strupcase(str1));
}*/
