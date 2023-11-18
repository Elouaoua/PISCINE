/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meel-oua <meel-oua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 13:49:19 by meel-oua          #+#    #+#             */
/*   Updated: 2023/11/18 14:51:34 by meel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	rep;

	i = 0;
	while (str[i])
	{
		j = 0;
		rep = i;
		while (str[i] == to_find[j] && str[i] && to_find[j])
		{
			i++;
			j++;
		}
		if (to_find[j] == '\0')
			return (&str[rep]);
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>

int main()
{
	char str[] = "YonkoDesMers";
	char tof[] = "oDes";
	printf("%s", ft_strstr(str, tof));
}*/