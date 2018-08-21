/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alguyon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 11:08:44 by alguyon           #+#    #+#             */
/*   Updated: 2018/08/05 20:36:12 by alguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_num(char nb)
{
	if (nb >= '0' && nb <= '9')
		return (1);
	else
		return (0);
}

int		is_sep(char c)
{
	if (c == ' ' || c == '\f' ||
		c == '\n' || c == '\r' || c == '\t'
		|| c == '\v')
		return (1);
	else
		return (0);
}

int		ft_atoi(char *str)
{
	int		i;
	int		resultat;
	int		signe;

	i = 0;
	resultat = 0;
	signe = 1;
	while (str[i] != 0 && is_sep(str[i]) != 0)
		i++;
	if (str[i] != '-' && str[i] != '+' && is_num(str[i]) == 0)
		return (0);
	if (str[i] == '-')
	{
		signe = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != 0 && is_num(str[i]) == 1)
	{
		resultat = resultat * 10 + (str[i] - '0');
		i++;
	}
	return (resultat * signe);
}
