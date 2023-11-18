/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meel-oua <meel-oua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 13:26:23 by meel-oua          #+#    #+#             */
/*   Updated: 2023/11/18 13:32:33 by meel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	else
		return (s1[i] - s2[i]);
}

/*#include <stdio.h>

int main() {
    char str1[] = "abd";
    char str2[] = "abcb";

    int result = ft_strncmp(str1, str2, 2);

    if (result == 0) {
        printf("Les chaînes sont égales.\n");
    } else if (result < 0) {
        printf("%s vient avant %s.\n", str1, str2);
    } else {
        printf("%s vient avant %s.\n", str2, str1);
    }

    return 0;
}*/