/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alguyon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 18:04:30 by alguyon           #+#    #+#             */
/*   Updated: 2018/08/08 10:49:49 by alguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int		index;
	int		result;

	index = 0;
	result = 0;
	while (s1[index] == s2[index])
	{
		if (s1[index] == '\0' || s2[index] == '\0')
			return (0);
		index++;
	}
	result = s1[index] - s2[index];
	return (result);
}
