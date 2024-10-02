/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmunoz-g <hmunoz-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 17:31:42 by hmunoz-g          #+#    #+#             */
/*   Updated: 2024/09/10 11:10:07 by hmunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

/*#include <stdio.h>
int main(void)
{
    int i = 10;
    int j = -949;
    int k = 0;
    printf("%d", ft_recursive_factorial(i));
    printf("\n");
    printf("%d", ft_recursive_factorial(j));
    printf("\n");
    printf("%d", ft_recursive_factorial(k));
    printf("\n");
}*/
