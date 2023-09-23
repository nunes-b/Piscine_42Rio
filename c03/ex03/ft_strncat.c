char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	index;
	unsigned int	endstr;
	unsigned int	count;

	count = 0;
	index = 0;
	endstr = 0;
	while (dest[endstr] != '\0')
	{
		endstr++;
	}
	while (src[index] != '\0' && count < nb)
	{
		dest[endstr] = src[index];
		index++;
		endstr++;
		count++;
	}
	dest[endstr] = '\0';
	return (dest);
}
/*
#include  <unistd.h>
#include <stdio.h>
int	main()
{
	char	dest[100] = "Romulo - ";
	char	src[] = "123";
	printf("%s\n",ft_strncat(dest,src , 2));
}*/
