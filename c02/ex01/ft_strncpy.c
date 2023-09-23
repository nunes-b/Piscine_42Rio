char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (src[index] != '\0' && index < n)
	{
		dest[index] = src[index];
		index++;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}

/*

#include <unistd.h>
#include <stdio.h>

int	main()
{
	char dest[100] =" ", src[] = "garelzinho";

	ft_strncpy(dest, src,2);
	printf("%s\n", dest);
}
*/
