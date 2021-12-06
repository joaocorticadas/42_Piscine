/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseixo-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 17:48:28 by jseixo-c          #+#    #+#             */
/*   Updated: 2021/09/08 20:51:34 by jseixo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	init_chart;

	init_chart = 'a';
	write(1, &init_chart, 1);
	while (init_chart < 'z')
	{
		init_chart++;
		write(1, &init_chart, 1);
	}
}
