/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meel-oua <meel-oua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:27:37 by meel-oua          #+#    #+#             */
/*   Updated: 2023/11/17 18:30:58 by meel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	i;
	int	o;
	int	p;

	i = 0;
	while (i <= 7)
	{
		o = i + 1;
		while (o <= 8)
		{
			p = o + 1;
			while (p <= 9)
			{
				ft_putchar(i + 48);
				ft_putchar(o + 48);
				ft_putchar(p + 48);
				if (i != 7 || o != 8 || p != 9)
					write(1, ", ", 2);
				p++;
			}
			o++;
		}
		i++;
	}
}

/*int main()
{
	ft_print_comb();
}*/