/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meel-oua <meel-oua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 16:31:32 by meel-oua          #+#    #+#             */
/*   Updated: 2023/11/18 16:52:06 by meel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	down;

	down = nb - 1;
	if (nb < 0)
		return (NULL);
	while (down > 0)
	{
		nb = nb * down;
		down--;
	}
	return (nb);
}

/*#include <stdio.h>

int main()
{
	printf("%d", ft_iterative_factorial(5));
}*/