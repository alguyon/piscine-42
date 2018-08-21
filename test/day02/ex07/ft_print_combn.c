/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alguyon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 19:54:20 by alguyon           #+#    #+#             */
/*   Updated: 2018/08/02 23:33:44 by alguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return(0);
}

void	ft_print_combn(void)
{
	int		a;
	int		b;

	a = 0;
	b = 1;
	while (a <= 9)
	{
		b = a + 1;
		while (b <= 9)
		{
			ft_putchar((char)a + 48);
			ft_putchar((char)b + 48);
			b++;
		}
		a++;
	}
}

int		main(void)
{
	ft_print_combn();
	return(0);

}
