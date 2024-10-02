/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmunoz-g <hmunoz-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:25:31 by hmunoz-g          #+#    #+#             */
/*   Updated: 2024/09/09 15:45:07 by hmunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	int	l;

	l = 48;
	while (l >= 48 && l <= 57)
	{
		ft_putchar(l);
		l++;
	}
}

/*int main(void)
{
    ft_print_alphabet();
}*/
