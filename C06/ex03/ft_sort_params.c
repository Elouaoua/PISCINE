/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meel-oua <meel-oua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 07:44:33 by meel-oua          #+#    #+#             */
/*   Updated: 2023/11/19 08:24:46 by meel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int		main(int argc, char **argv)
{
	int		i1;
	int		i2;
	char	*tmp;

	i2 = argc;
	i1 = 1;
	while (i1 <= argc)
	{
		i2 = 1;
		while (i2 <= argc - 1)
		{
			if (ft_strcmp(argv[i2], argv[i2 - 1]) < 0)
			{
				char *tmp = argv[i2];
				argv[i2] = argv[i2 - 1];
				argv[i2 - 1] = tmp;
			}
			++i2;
		}
		++i1;
	}
	i1 = 0;
	while (++i1 < argc)
		ft_putstr(argv[i1]);
}
