/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alguyon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 16:33:06 by alguyon           #+#    #+#             */
/*   Updated: 2018/08/11 21:28:41 by alguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ok_line(char **grid, int nb)
{
	int		index;
	int		index_c;

	index = 1;
	index_c = 0;
	while (index < 10)
	{
		while (index_c < 9)
		{
				if (grid[index][index_c] == nb)
					return(0);
			index_c++;
		}
		index++;
	}
	return (1);
}

int		ok_column(char **grid, int nb)
{
	int		index;
	int		index_c;

	index = 1;
	index_c = 0;
	while (index_c < 9)
	{
		while (index < 10)
		{
			if (grid[index][index_c] == nb)
				return (0);
			index++;
		}
		index_c++;
	}
	return (1);
}

int		ok_bloc(char **grid, int nb)
{
	int		index;
	int		index_c;

	index = 1;
	index_c = 0;

}
