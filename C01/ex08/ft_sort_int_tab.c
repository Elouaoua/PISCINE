/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meel-oua <meel-oua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 19:16:34 by meel-oua          #+#    #+#             */
/*   Updated: 2023/11/17 19:31:32 by meel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	start;
	int	cmp;
	int	repere;
	int	sw;

	start = 0;
	while (start < (size - 1))
	{
		repere = start;
		cmp = start + 1;
		while (cmp < size)
		{
			if (tab[cmp] < tab[repere])
				repere = cmp;
			cmp++;
		}
		sw = tab[start];
		tab[start] = tab[repere];
		tab[repere] = sw;
		start++;
	}
}

/*int main() {
	int tableau[] = {5, 2, 9, 1, 5, 6};
	int taille = sizeof(tableau) / sizeof(tableau[0]);
	printf("Tableau non trié: ");
	for (int i = 0; i < taille; i++) {
		printf("%d ", tableau[i]);
	}
	ft_sort_int_tab(tableau, taille);
	printf("\nTableau trié: ");
	for (int i = 0; i < taille; i++) {
		printf("%d ", tableau[i]);
	}
	return 0;
}*/