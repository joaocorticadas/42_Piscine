/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseixo-c <jseixo-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 10:54:29 by jseixo-c          #+#    #+#             */
/*   Updated: 2021/09/27 20:02:39 by jseixo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	loops;
	int	temp;

	temp = nb - 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
		loops = nb;
		while (temp >= 1)
		{
			nb = nb * (temp);
			temp--;
		}
		return (nb);
	}
}

int main()
{
	printf("%d", ft_iterative_factorial(0));
	return 0;
}
