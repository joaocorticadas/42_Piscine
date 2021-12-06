/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseixo-c <jseixo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 12:03:36 by jseixo-c          #+#    #+#             */
/*   Updated: 2021/09/26 14:36:01 by jseixo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	i;

	i = power;
	if ((nb == 0 && power == 0) || power == 0)
	{
		return (1);
	}
	else if (power < 0)
	{
		return (0);
	}
	else
	{
		if (power != 1)
		{
			nb = nb * ft_recursive_power(nb, power - 1);
		}
		return (nb);
	}
}
