/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmunoz-g <hmunoz-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:19:05 by hmunoz-g          #+#    #+#             */
/*   Updated: 2024/09/09 15:44:33 by hmunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	int	l;

	l = 97;
	while (l >= 97 && l <= 122)
	{
		ft_putchar(l);
		l++;
	}
}

/*int	main(void)
{
	ft_print_alphabet();
}*/
