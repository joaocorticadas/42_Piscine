/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseixo-c <jseixo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 19:36:35 by jseixo-c          #+#    #+#             */
/*   Updated: 2021/09/14 11:56:52 by jseixo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	temporary;

	a = 0;
	{
		while (a < (size / 2))
		{
			temporary = *(tab + a);
			*(tab + a) = *(tab + ((size - 1) - a));
			*(tab + ((size - 1) - a)) = temporary;
			a++;
		}
	}
}
