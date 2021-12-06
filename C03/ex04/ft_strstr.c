/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseixo-c <jseixo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 19:21:18 by jseixo-c          #+#    #+#             */
/*   Updated: 2021/09/22 12:37:49 by jseixo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_to_find(char *c);

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	b;
	int	pos;

	if (*to_find == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			pos = i;
			b = 0;
			while (str[i] == to_find[b] && str[i] != '\0' && to_find[b] != '\0')
			{
				i++;
				b++;
			}
			if (b == ft_to_find(to_find))
				return (str + pos);
		}
		else
			i++;
	}
	return (0);
}

int	ft_to_find(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
		i++;
	return (i);
}
