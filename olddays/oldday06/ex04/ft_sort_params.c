/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alguyon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 08:32:43 by alguyon           #+#    #+#             */
/*   Updated: 2018/08/15 22:33:32 by alguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

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

int		ft_strcmp(char *s1, char *s2)
{
	int		i;
	int		result;

	i = 0;
	result = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' || s2[i] == '\0')
			return (0);
		i++;
	}
	result = s1[i] - s2[i];
	return (result);
}

void	print_params(char **argv)
{
	int		i;

	i = 1;
	while (argv[i] != '\0')
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		i;
	int		cmp;
	char	*swap[1];

	i = 1;
	while (i < argc - 1)
	{
		cmp = ft_strcmp(argv[i], argv[i + 1]);
		if (cmp > 0)
		{
			*swap = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = *swap;
			i = 1;
		}
		else
			i++;
	}
	print_params(argv);
	return (0);
}
