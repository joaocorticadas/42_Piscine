/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseixo-c <jseixo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 10:30:27 by jseixo-c          #+#    #+#             */
/*   Updated: 2021/09/21 11:15:50 by jseixo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlen(char *c)
{
	unsigned int	i;

	i = 0;
	while (c[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	b;
	unsigned int	return_value;

	return_value = ft_strlen(dest) + ft_strlen(src);
	i = ft_strlen(dest);
	b = 0;
	if (size <= ft_strlen(dest))
		return (ft_strlen(src) + size);
	if (size > 0 && size > ft_strlen(dest))
	{
		while (i < size - 1 && src[b] != '\0')
		{
			dest[i] = src[b];
			i++;
			b++;
		}
		dest[i] = '\0';
	}
	return (return_value);
}
