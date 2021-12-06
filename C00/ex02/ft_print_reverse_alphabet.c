/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseixo-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 21:35:49 by jseixo-c          #+#    #+#             */
/*   Updated: 2021/09/08 21:53:55 by jseixo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	last_char;

	last_char = 'z';
	while (last_char >= 'a')
	{
		write(1, &last_char, 1);
		last_char--;
	}
}
