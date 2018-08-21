/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alguyon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 16:47:23 by alguyon           #+#    #+#             */
/*   Updated: 2018/08/01 17:37:05 by alguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char *str;
	int index;

	str = "abcdefi";
	index = 0;
	while (str[index])
	{
		ft_putchar(str[index]);
		index++;
	}
}

int main(void)
{
	ft_print_alphabet();
}
