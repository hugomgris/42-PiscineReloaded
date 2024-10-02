/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmunoz-g <hmunoz-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 18:30:31 by hmunoz-g          #+#    #+#             */
/*   Updated: 2024/09/09 18:38:35 by hmunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return (NULL);
	tab = (int *)malloc(sizeof(*tab) * (max - min));
	if (tab == NULL)
		return (NULL);
	else
	{
		i = -1;
		while (++i < max - min)
		{
			tab[i] = min + i;
		}
	}
	return (tab);
}

/*#include <stdio.h>
int	main(void)
{
	int min;
	int	max;
	int	i;
	int	*tab;

	i = 0;
	min = 2;
	max = 7;
	tab = ft_range(min, max);
	while (i < max - min)
	{
		printf ("%d", tab[i]);
		i++;
	}
	printf ("\n");
}*/
