/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseixo-c <jseixo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 16:15:20 by jseixo-c          #+#    #+#             */
/*   Updated: 2021/09/29 17:51:38 by jseixo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_len(int size, char **strs);
char	*ft_add(char **strs, char *sep, char *result, int size);
int		ft_separator(char *sep);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_size;
	char	*result;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	else
	{
		total_size = ft_len(size, strs) + ((size - 1) * ft_separator(sep)) + 1;
		result = (char *)malloc((sizeof(char) * total_size));
		if (result == NULL)
			return (0);
		return (ft_add(strs, sep, result, size));
	}
}

char	*ft_add(char **strs, char *sep, char *result, int size)
{
	int		i;
	int		k;
	int		j;

	k = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			result[k++] = strs[i][j++];
		}
		j = 0;
		while (sep [j] != '\0')
		{
			if (i < size - 1)
				result[k] = sep[j];
			k++;
			j++;
		}
		i++;
	}
	result[k] = '\0';
	return (result);
}

int	ft_len(int size, char **strs)
{
	int	i;
	int	j;
	int	total_size;

	total_size = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			total_size++;
			j++;
		}
		i++;
	}
	return (total_size);
}

int	ft_separator(char *sep)
{
	int	i;

	i = 0;
	while (sep[i] != '\0')
	{
		i++;
	}
	return (i);
}
