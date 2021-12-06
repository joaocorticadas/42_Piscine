/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseixo-c <jseixo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 12:10:21 by jseixo-c          #+#    #+#             */
/*   Updated: 2021/09/14 15:13:50 by jseixo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	value_a;
	int	value_b;
	int	temporary_a;
	int	temporary_b;

	value_a = 0;
	while (value_a < size)
	{
		value_b = value_a + 1;
		while (value_b < size || (*(tab + value_a) > *(tab + value_b)))
		{
			if (*(tab + value_a) > *(tab + value_b))
			{
				temporary_a = *(tab + value_a);
				temporary_b = *(tab + value_b);
				*(tab + value_a) = temporary_b;
				*(tab + value_b) = temporary_a;
			}
			value_b++;
		}
		value_a++;
	}
}
