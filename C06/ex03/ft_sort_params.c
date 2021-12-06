/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseixo-c <jseixo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 10:21:07 by jseixo-c          #+#    #+#             */
/*   Updated: 2021/09/26 14:08:16 by jseixo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_strcmp(char *st1, char *st2);
void	ft_putchar(char c);
void	ft_to_write(char *str);
void	ft_swap(int argc, char **argv);

//Main function
int	main(int argc, char **argv)
{
	int	i;

	i = argc;
	if (argc > 1)
	{
		ft_swap(argc, argv);
		i--;
		while (i >= 1)
		{
			ft_to_write(argv[i]);
			i--;
		}
	}
	return (0);
}

//Function to swap
void	ft_swap(int argc, char **argv)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) < 0)
			{
				temp = argv[i];
				argv[i] = argv[j];
				argv [j] = temp;
			}
			j++;
		}
		i++;
	}
}

//Function to compare characters
int	ft_strcmp(char *st1, char *st2)
{
	int	i;

	i = 0;
	while (st1[i] != '\0' || st2[i] != '\0')
	{
		if (st1[i] != st2[i])
		{
			return (st1[i] - st2[i]);
		}
		i++;
	}
	return (st1[i] - st2[i]);
}

//Function to print characteres
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

//Function to print string;
void	ft_to_write(char *str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}
