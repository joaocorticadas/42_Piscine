/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseixo-c <jseixo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 15:00:09 by jseixo-c          #+#    #+#             */
/*   Updated: 2021/09/27 18:26:18 by jseixo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_next_prime(int nb)
{
	int	i;

	i = 1;
	while (i <= 46340)
	{
		if (i * i >= nb)
			return (i);
		i++;
	}
	return (i);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	j;

	if (nb < 2)
		return (0);
	else if (nb == 2 || nb == 3 || nb == 5 || nb == 7)
		return (1);
	else if (nb < 10)
		return (0);
	else if (nb > 9)
	{
		i = ft_next_prime(nb);
		j = 2;
		while (j <= i && j != nb)
		{
			if (nb % j == 0)
			{
				return (0);
			}
			j++;
		}
	}
	return (1);
}
