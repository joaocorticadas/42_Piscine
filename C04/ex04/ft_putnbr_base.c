/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseixo-c <jseixo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 10:39:16 by jseixo-c          #+#    #+#             */
/*   Updated: 2021/09/25 12:51:27 by jseixo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_same_char(char *base);
int		ft_pl_min(char *base);
int		ft_empty(char *str);
void	ft_putchar(char c);

//Main function
void	ft_putnbr_base(int nbr, char *base)
{
	int	len;

	len = 0;
	if (ft_empty(base) == 0 && ft_pl_min(base) == 0 && ft_same_char(base) == 0)
	{
		while (base[len] != '\0')
			len++;
		if (nbr == -2147483648)
		{
			ft_putnbr_base((nbr / len), base);
			ft_putchar(base[-1 * (nbr % len)]);
		}
		else if (nbr < 0)
		{
			ft_putchar('-');
			ft_putnbr_base(-nbr, base);
		}
		else if (nbr / len != 0)
		{
			ft_putnbr_base((nbr / len), base);
			ft_putchar(base[nbr % len]);
		}
		else
			ft_putchar(base[nbr % len]);
	}
}

//Function to write char
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

//returns 1 if two characters are the same and 0 if all char are unique
int	ft_same_char(char *base)
{
	int	i;
	int	b;

	i = 0;
	while (base[i] != '\0')
	{
		b = i + 1;
		while (base[b] != '\0')
		{
			if (base[i] == base[b])
			{
				return (1);
			}
			b++;
		}
		i++;
	}
	return (0);
}

//Checks if string has - or + signals
int	ft_pl_min(char *base)
{
	int	i;

	i = 0;
	while (base [i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
		{
			return (1);
		}
		i++;
	}
	return (0);
}

//checks if base is empty or size 1; If so returns 1 else returns 0
int	ft_empty(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	if (i == 0 || i == 1)
	{
		return (1);
	}
	return (0);
}
