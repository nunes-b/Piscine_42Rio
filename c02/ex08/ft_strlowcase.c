char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
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
	char	str[] = "NGIX";
	char	str1[] = "OPA FICOU MINUSCULO!";

	printf("%s\n", ft_strlowcase(str));
	printf("%s\n", ft_strlowcase(str1));
}*/
