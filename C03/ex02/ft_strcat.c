/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseixo-c <jseixo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 17:12:11 by jseixo-c          #+#    #+#             */
/*   Updated: 2021/09/21 11:18:44 by jseixo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	size_src;
	int	size_dest;
	int	i;

	size_src = 0;
	while (src[size_src] != '\0')
	{
		size_src++;
	}
	size_dest = 0;
	while (dest[size_dest] != '\0')
	{
		size_dest++;
	}
	i = 0;
	while ((i < size_src) && (src[i] != '\0'))
	{
		dest[size_dest + i] = src[i];
		i++;
	}
	dest[size_dest + i] = '\0';
	return (dest);
}
