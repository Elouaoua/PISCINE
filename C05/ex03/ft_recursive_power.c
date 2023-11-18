/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meel-oua <meel-oua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 16:52:50 by meel-oua          #+#    #+#             */
/*   Updated: 2023/11/18 16:58:43 by meel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	if (power > 1)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
}

/*#include <stdio.h>

int main()
{
	printf("%d", ft_recursive_power(5, 5));
}*/