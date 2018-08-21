/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alguyon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 14:57:37 by alguyon           #+#    #+#             */
/*   Updated: 2018/08/09 21:56:41 by alguyon          ###   ########.fr       */
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

int		main(int argc, char **argv)
{
	int		i;
	int		y;

	i = 1;
	y = 1;
	if (argc > 1)
		while (argv[i] != '\0')
		{
			ft_putstr(argv[y]);
			ft_putchar('\n');
			i++;
			y++;
		}
	return (0);
}
