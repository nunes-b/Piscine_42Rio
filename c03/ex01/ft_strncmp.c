int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}

/*
#include <stdio.h>
int	main()
{
	char	str[] = "aaaab";
	char	str1[] = "aaaaab";
	unsigned int n = 4;

	printf("%d\n", ft_strncmp(str, str1, n));
}*/
