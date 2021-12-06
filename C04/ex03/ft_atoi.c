/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseixo-c <jseixo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 13:34:02 by jseixo-c          #+#    #+#             */
/*   Updated: 2021/09/25 12:54:19 by jseixo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_check(char *str);
int	ft_to_num(char *str, int i);
int	ft_odd(char *str);

int	ft_atoi(char *str)
{
	int	start;

	start = ft_check(str);
	if (str[start] < '0' || str[start] > '9')
	{
		return (0);
	}
	else if (ft_odd(str) == 0)
	{
		return (ft_to_num(str, start));
	}
	else
	{
		return (ft_to_num(str, start) * -1);
	}
}

int	ft_check(char *str)
{
	int	i;

	i = 0;
	while (str[i] == 32 || str[i] == '\t' || str[i] == '\n'
		||str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		i++;
	}
	return (i);
}

int	ft_odd(char *str)
{
	int	final;
	int	i;
	int	count_minus;

	count_minus = 0;
	i = 0;
	final = ft_check(str);
	while (i < final)
	{
		if (str[i] == '-')
		{
			count_minus++;
		}
		i++;
	}
	if ((count_minus % 2) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

int	ft_to_num(char *str, int i)
{
	int	temp;
	int	no;

	no = 0;
	temp = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		temp = str [i] - '0';
		no = no * 10 + temp;
		i++;
	}
	return (no);
}
