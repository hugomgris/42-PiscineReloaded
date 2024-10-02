/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmunoz-g <hmunoz-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 17:24:27 by hmunoz-g          #+#    #+#             */
/*   Updated: 2024/09/09 17:31:09 by hmunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
		return (0);
	if (nb > 12)
		return (0);
	if (nb == 1)
		return (1);
	while (nb > 1)
	{
		res = res * nb;
		nb--;
	}
	return (res);
}

/*#include <stdio.h>
int	main(void)
{
	int	i = 8;
	int j = -9;
	int	k = 0;
	printf("%d", ft_iterative_factorial(i));
	printf("\n");
	printf("%d", ft_iterative_factorial(j));
    printf("\n");
	printf("%d", ft_iterative_factorial(k));
    printf("\n");
}*/
