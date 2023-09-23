char	*ft_strcat(char *dest, char *src)
{
	int	index;
	int	endofstr;

	index = 0;
	endofstr = 0;
	while (dest[endofstr] != '\0')
	{
		endofstr++;
	}
	while (src[index] != '\0')
	{
		dest[endofstr] = src[index];
		endofstr++;
		index++;
	}
	dest[endofstr] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <unistd.h>
int	main()
{
	char	str1[] = "inicio ";
	char	str2[] = "- fim";
	printf("%s\n", ft_strcat(str1, str2));
}
*/
