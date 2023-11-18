/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meel-oua <meel-oua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 20:46:13 by meel-oua          #+#    #+#             */
/*   Updated: 2023/11/18 12:15:53 by meel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9' || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
		return (1);
	return (0);
}

int	ft_is_alpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	while (str[i])
	{
		if ((!ft_isalnum(str[i - 1]) && (str[i] >= 'a' && str[i] <= 'z')))
			str[i] -= 32;
		if ((ft_isalnum(str[i - 1]) && (str[i] >= 'A' && str[i] <= 'Z')))
			str[i] += 32;
		i++;
	}
	return (str);
}

/*int main()
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(str));
	return (0);
}*/