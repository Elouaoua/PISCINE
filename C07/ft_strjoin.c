/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meel-oua <meel-oua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 21:52:43 by meel-oua          #+#    #+#             */
/*   Updated: 2023/11/21 17:20:12 by meel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(int	size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	k;
	int	total;
	char *s;

	i = 0;
	total = 0;
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		if (i < size - 1)
			total += ft_strlen(sep);
		i++;
	}
	s = (char *)malloc(sizeof(char) * total + 1);
	if (s == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			s[k++] = strs[i][j++];
		j = 0;
		if (i < size - 1)
			s[k++] = sep[j++];
		i++;
	}
	s[k] = '\0';
	return (s);
}

/*int main(void)
{
    char *tab[4];
    tab[0] = "Hello";
    tab[1] = "World";
    tab[2] = "of";
    tab[3] = "Programming";
	char * result;
	
    result = ft_strjoin(4, tab, "  ");
	if (result != NULL)
	{
		printf("%s", result);
	}
	free(result);
    return 0;
}*/