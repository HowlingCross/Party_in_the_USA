/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerber <angerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 19:44:03 by angerber          #+#    #+#             */
/*   Updated: 2025/08/04 21:22:58 by angerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (tab[i] != '\0')
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}

// int main(void)
// {
// 	int arr[5] = {1, 4, 3, 5, 8, 0};
// 	int b = 0;
// 	int size = 6;

// 	printf("arr = ");
// 	for (b = 0; b < size; b++)
// 		printf("%d, ", *(arr+b));
// 	ft_sort_int_tab(arr, size);
// 	printf(" arr = ");
// 	for (b = 0; b < size; b++)
// 		printf("%d ", *(arr + b));
// }