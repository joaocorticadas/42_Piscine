/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseixo-c <jseixo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 10:24:30 by jseixo-c          #+#    #+#             */
/*   Updated: 2021/09/19 15:33:34 by jseixo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_non_printable(int i);
void	print_ascii(int i);
void	ft_putchar(char c);

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] < 127)
		{
			ft_putchar(str[i]);
		}
		else
		{
			if (str[i] < 0)
			{
				print_non_printable(str[i] + 256);
			}
			else
			{
				print_non_printable(str[i]);
			}
		}
		i ++;
	}
}

void	print_non_printable(int i)
{
	ft_putchar('\\');
	print_ascii(i / 16);
	print_ascii(i % 16);
}

void	print_ascii(int i)
{
	if (i < 10)
		ft_putchar('0' + i);
	else
		ft_putchar('a' + i - 10);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
