/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meel-oua <meel-oua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 12:39:39 by meel-oua          #+#    #+#             */
/*   Updated: 2023/11/18 13:34:34 by meel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	else
		return (s1[i] - s2[i]);
}

/*#include <stdio.h>

int main() {
    char str1[] = "abc";
    char str2[] = "hello";

    int result = ft_strcmp(str1, str2);

    if (result == 0) {
        printf("Les chaînes sont égales.\n");
    } else if (result < 0) {
        printf("%s vient avant %s.\n", str1, str2);
    } else {
        printf("%s vient avant %s.\n", str2, str1);
    }

    return 0;
}*/