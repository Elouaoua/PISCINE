/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meel-oua <meel-oua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 14:37:59 by meel-oua          #+#    #+#             */
/*   Updated: 2023/11/18 14:54:34 by meel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str) {
    int i = 0;
    while (str[i]) {
        i++;
    }
    return i;
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int n) {
    unsigned int i = 0;
    unsigned int j = 0;

    while (dest[i]) {
        i++;
    }

    while (j < n - 1 && src[j]) {
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\0';

    return i;
}

int main() {
    char dest[] = "Empereur";
    char src[] = "Baggy";
    
    printf("%u\n", ft_strlcat(dest, src, 5));
    printf("Resultat : %s\n", dest);

    return 0;
}
