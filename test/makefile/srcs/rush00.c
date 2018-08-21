/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alguyon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 11:03:52 by alguyon           #+#    #+#             */
/*   Updated: 2018/08/19 13:47:02 by alguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	print(int w, int h, int x, int y)
{
	int		a;
	int		b;

	a = x - 1;
	b = y - 1;
	if (w > 0 && h > 0 && w < a && h < b)
		ft_putchar(' ');
	else
	{
		if ((w == 0 && (h == 0 || h == b)) || (w == a && (h == 0 || h == b)))
			ft_putchar('o');
		else if (w > 0 && w < x - 1)
			ft_putchar('-');
		else
			ft_putchar('|');
	}
}

void	rush(int x, int y)
{
	int		w;
	int		h;

	w = 0;
	h = 0;
	if (x <= 0 || y <= 0)
		return ;
	while (w < x && h < y)
	{
		print(w, h, x, y);
		if (w == x - 1)
		{
			w = 0;
			h++;
			ft_putchar('\n');
		}
		else
			w++;
	}
}
