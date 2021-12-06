/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseixo-c <jseixo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 16:17:34 by jseixo-c          #+#    #+#             */
/*   Updated: 2021/09/17 16:39:33 by jseixo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if ((*str < 'A') || (*str > 'Z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
