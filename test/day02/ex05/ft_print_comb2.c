/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alguyon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 14:19:12 by alguyon           #+#    #+#             */
/*   Updated: 2018/08/02 16:01:38 by alguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return(0);
}

void	ft_print(char a, char b, char c, char d)
{
	ft_putchar(d + 48);
	ft_putchar(c + 48);
	ft_putchar(32);
	ft_putchar(b + 48);
	ft_putchar(a + 48);
	if (d + 48 != '9' && c + 48 != '8')
	{
		ft_putchar(32);
	}
}

void ft_print_comb2(void)
{
	int		a;
	int 	b;
	int		c;
	int		d;

	a = 1;
	b = 0;
	c = 0;
	d = 0;
	while (d < 10 && c < 9)
	{
		if (a == 9)
		{
			b++;
			a = 0;
		}
		if (a == 9 && b == 9)
		{
			c++;
			a = c + 1;
			b = d;
		}
		if (c == 9)
		{
			d++;
			c = 0;
		}
		ft_print(d, c, b, a);
		a++;
	}
}

int		main(void)
{
	ft_print_comb2();
	return(0);
}
