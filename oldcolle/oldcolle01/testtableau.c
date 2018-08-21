#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		i;
//	int		j;
	char	**grille;

	grille = malloc (argc * sizeof(char*));
	i = 0;
//	j = 0;
	if (grille == 0)
	{
		while (i < argc)
		{
			grille[i] = argv[i];
			ft_putchar(grille[i]);
			i++;
		}
	}
	return (0);
}
