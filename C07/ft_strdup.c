/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meel-oua <meel-oua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 20:22:28 by meel-oua          #+#    #+#             */
/*   Updated: 2023/11/20 20:31:11 by meel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*ft_strdup(char *str)
{
	int		i;
	char	*dest;

	i = 0;
	while (str[i])
		i++;
	dest = (char *)malloc(sizeof(char) * i);
	if (dest == NULL)
		return (NULL);
	i = 0;
	
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>

int main()
{
	char str[] = "DokeNoBaggy";
	char *result;

	result = ft_strdup(str);

	printf("%s", result);
	free(result);
	return (0);
}