int	ft_str_is_alpha(char *str)
{
	char	check;

	check = 1;
	if (*str == '\0')
	{
		return (check);
	}
	while (*str != '\0')
	{
		if (!((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')))
		{
			check = 0;
			return (check);
		}
		str++;
	}
	return (check);
}
/*
#include <stdio.h>
#include <unistd.h>

int	main()
{
	char str1[] = "amg";
	char str2[] = "a23";
	char str3[] = "";

	printf("%d\n", ft_str_is_alpha(str1));
	printf("%d\n", ft_str_is_alpha(str2));
	printf("%d\n", ft_str_is_alpha(str3));

}
*/
