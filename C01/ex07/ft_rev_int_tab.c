/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meel-oua <meel-oua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 19:10:40 by meel-oua          #+#    #+#             */
/*   Updated: 2023/11/17 19:15:46 by meel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	sw;

	i = 0;
	while (i <= size - 1)
	{
		sw = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = sw;
		i++;
		size--;
	}
}

/*#include <unistd.h>

int main() {
    int tableau[] = {1, 2, 3, 4, 5, 6};
    int taille = sizeof(tableau) / sizeof(tableau[0]);
    printf("Tableau original: ");
    for (int i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    ft_rev_int_tab(tableau, taille);
    printf("\nTableau inverse: ");
    for (int i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    return 0;
}*/