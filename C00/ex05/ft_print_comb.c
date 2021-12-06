/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseixo-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 17:34:55 by jseixo-c          #+#    #+#             */
/*   Updated: 2021/09/10 10:47:50 by jseixo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	type_text(char one, char two, char three)
{
	if (one == '7' && two == '8' && three == '9')
	{
		write(1, &one, 1);
		write(1, &two, 1);
		write(1, &three, 1);
	}
	else
	{
		write(1, &one, 1);
		write(1, &two, 1);
		write(1, &three, 1);
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				type_text(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
