/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseixo-c <jseixo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 22:06:13 by jseixo-c          #+#    #+#             */
/*   Updated: 2021/09/18 16:09:57 by jseixo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_small(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if ((*(str + i) >= 65) && (*(str + i) <= 90))
		{
			*(str + i) = *(str + i) + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_small(str);
	i = 0;
	while (*(str + i) != '\0')
	{
		if ((str + i == str) && ((*str >= 'a') && *(str + i) <= 'z'))
		{
			*(str + i) = *(str + i) - 32;
		}
		else if ((*(str + i) < 48) || ((*(str + i) > 57)
				&& (*(str + i) < 65)) || (*(str + i) > 90
				&& *(str + i) < 97 ) || (*(str + i) > 122 ))
		{
			if (*(str + i + 1) >= 'a' && *(str + i + 1) <= 'z')
			{
				*(str + i + 1) = *(str + i + 1) - 32;
				*(str + i + 2) = *(str + i + 2);
			}
		}
		i++;
	}
	return (str);
}
