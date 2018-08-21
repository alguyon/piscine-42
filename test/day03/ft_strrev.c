
#include <stdio.h>

int		ft_strlen(char *str)
{
	int		count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	tmp;

	i = 0;
	j = ft_strlen(str);
	tmp = '0';
	while (i < j)
	{
		tmp = str[j - 1];
		str[j - 1] = str[i];
		str[i] = tmp;
		i++;
		j--;
	}
	return (str);

}

int		main(void)
{
	char	tab[] = "abcd";
	printf("%s", ft_strrev(tab));
	return (0);
}
