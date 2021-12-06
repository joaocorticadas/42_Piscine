/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseixo-c <jseixo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 12:25:16 by jseixo-c          #+#    #+#             */
/*   Updated: 2021/09/19 20:41:16 by jseixo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	string_count;
	unsigned int	no;

	string_count = 0;
	no = 0;
	while (src[string_count] != '\0')
	{
		string_count++;
	}
	if (size != 0)
	{
		while (src[no] != '\0' && no < (size - 1))
		{
			dest[no] = src[no];
			no++;
		}
		dest[no] = '\0';
	}
	return (string_count);
}

int		main(void)
{
	char src[] = "Source";
	char dest[] = "";
	unsigned int n;

	n = 3;

	printf("BEFORE\n\tsrc: %s\n\tdes: %s\n\tsize: %d\n", src, dest, n);

    n = ft_strlcpy(dest, src, n);

	printf("AFTER\n\tsrc: %s\n\tdes: %s\n\tsize: %d", src, dest, n);
	return (0);
}
