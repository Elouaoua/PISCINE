/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meel-oua <meel-oua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 14:37:59 by meel-oua          #+#    #+#             */
/*   Updated: 2023/11/18 15:00:52 by meel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	i;
	int	j;

	i = 0;
	if (size == 0)
		return (NULL);
	while (dest[i])
		i++;
	while (j < size - 1 && src[j])
	{
		dest[i] == src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (ft_strlen(dest) + ft_strlen(src));
}

#include <stdio.h>

int main()
{
	char dest[] = "Empereur";
	char src[] = "Baggy";
	printf("%d", ft_strlcat(dest, src, 5));
}