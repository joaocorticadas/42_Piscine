/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseixo-c <jseixo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 13:13:53 by jseixo-c          #+#    #+#             */
/*   Updated: 2021/09/26 14:41:19 by jseixo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	else if (index <= 1)
	{
		return (index);
	}
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
