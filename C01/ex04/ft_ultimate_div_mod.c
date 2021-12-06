/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseixo-c <jseixo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:45:30 by jseixo-c          #+#    #+#             */
/*   Updated: 2021/09/13 16:35:18 by jseixo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	original_values [2];
	int	result_division;
	int	result_modulo;

	original_values[0] = *a;
	original_values[1] = *b;
	result_division = original_values [0] / original_values [1];
	result_modulo = original_values [0] % original_values [1];
	*a = result_division;
	*b = result_modulo;
}
