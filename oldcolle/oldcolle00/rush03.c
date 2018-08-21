/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alguyon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 08:35:05 by alguyon           #+#    #+#             */
/*   Updated: 2018/08/04 09:52:14 by alguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	print(int width,int heigth,int  x,int  y)
{
	
}

void	rush(int x, int y)
{
	int		width;
	int		heigth;

	width = 0;
	heigth = 0;
	if (x == 0 || y == 0)
		return ;
	while (width < x && heigth < y)
	{
		if (width > 0 && heigth > 0 && width < x - 1 && heigth < y - 1)
			ft_putchar(' ');
		else
		{
			if ((width == 0 && heigth == 0) || (width == 0 && heigth == y - 1))
				ft_putchar('A');
			else if ((width == x - 1 && heigth == 0) || (width == x - 1 && heigth == y - 1))
				ft_putchar('C');
			else
				ft_putchar('B');
		}
		if (width == x - 1)
		{
			width = 0;
			ft_putchar('\n');
			heigth++;
		}
		else
		{
			width++;
		}
	}
}

int		main(void)
{
	rush(142, 5);
	return (0);
}
