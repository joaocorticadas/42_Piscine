/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseixo-c <jseixo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 19:04:21 by jseixo-c          #+#    #+#             */
/*   Updated: 2021/09/13 19:20:14 by jseixo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	char_value;

	char_value = 0;
	while (*str != '\0')
	{
		char_value++;
		str++;
	}
	return (char_value);
}
