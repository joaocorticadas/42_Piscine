/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseixo-c <jseixo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 11:33:31 by jseixo-c          #+#    #+#             */
/*   Updated: 2021/09/28 18:58:58 by jseixo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	size;
	int	i;

	size = max - min;
	array = (int *)malloc(sizeof(int) * size);
	if (min >= max)
		return (0);
	else
	{
		if (array == NULL)
			return (0);
		i = 0;
		while (min < max)
		{
			array[i] = min;
			i++;
			min++;
		}
		return (array);
	}
}
