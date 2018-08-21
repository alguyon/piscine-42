/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alguyon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 14:59:12 by alguyon           #+#    #+#             */
/*   Updated: 2018/08/11 21:28:35 by alguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

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
		if (i != 8)
			ft_putchar(' ');
		i++;
	}
}

int		is_legal(char c)
{
	if ((c >= '1' && c <= '9') || c == '.')
		return (1);
	return (0);
}

int		parsing(char **argv)

	char	**grid;
	int		index;
	int		index_c;

	index = 1;
	while (index < 10)
	{
		index_c = 0;
		while (argv[index][index_c] != '\0')
		{
			if (is_legal(argv[index][index_c]) == 0)
					return (0);
			index_c++;
		}
		if (index_c != 9)
			return (0);
		index++;
	}






































/*	grid = (char **)malloc(sizeof(char *) * (9 + 1));
	grid[9] = NULL;
	index = 0;
	while (index < 9)
	{
		grid[index] = (char *)malloc(sizeof(char) * (9 + 1));
		grid[index][9] = '\0';
		index++;
	}
	index = 0;
	while (index < 9)
	{
		index_c = 0;
		while (index_c < 9)
		{
			grid[index][index_c] = argv[index + 1][index_c];
			index_c++;
		}
		index++;
	}
	index = 0;
	while (index < 9)
	{
		ft_putstr(grid[index]);
		ft_putchar('\n');
		index++;
	}
	return (1);*/
}
