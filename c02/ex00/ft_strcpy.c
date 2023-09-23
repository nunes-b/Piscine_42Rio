char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/* 
#include <stdio.h>
int	main()
{
	
	char	dest[100], src[]= "Mel";
	char *retorno;	
	retorno = ft_strcpy(dest, src);
	printf("dest: %s\n", retorno);
}
*/
