/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alguyon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 14:58:14 by alguyon           #+#    #+#             */
/*   Updated: 2018/08/11 19:25:30 by alguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		parsing(char **argv);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ok_line(char **argv);

int		main(int argc, char **argv)
{
	if (argc != 10)
		return (0);
	if (parsing(argv) == 0)
		return (0);
//	while (nb < 10)
//	{
//		if ((ok_line(**argv, nb)) && (ok_column(**argv, nb)) && (ok_bloc(**argv, nb)))
//			**argv = nb;
//		nb++;
//	}
	return (0);
}
