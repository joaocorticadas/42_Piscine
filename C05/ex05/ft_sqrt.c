/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseixo-c <jseixo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 15:02:56 by jseixo-c          #+#    #+#             */
/*   Updated: 2021/09/27 18:31:46 by jseixo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <math.h>

int	ft_sqrt(int nb)
{
	int	i;
	int	temp;

	temp = 0;
	i = 0;
	if (nb == 0)
		return (0);
	while (i <= 46341)
	{
		temp = i * i;
		i++;
		if (i * i == nb)
			return (i);
	}
	return (0);
}

int main()
{
	//ft_sqrt(9);
	printf("%lf\n", sqrt(2147395600));
	printf("%d", ft_sqrt(2147395600));
	return 0;
}
