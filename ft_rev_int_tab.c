/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerber <angerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 17:07:34 by angerber          #+#    #+#             */
/*   Updated: 2025/08/04 20:20:29 by angerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = size;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[j - 1];
		tab[j - 1] = temp;
		i++;
		j--;
	}
}

// int main(void)
// {
// 	int r[7] = { 1, 2, 3, 4, 5 };
// 	int  i =0;
// 	int size = si
// 	for (i = 0;i < size;i++)
// 		printf("%d \n",*(r+i));
// 	ft_rev_int_tab(r, size);
// 	printf("a = ");
// 	for (i = 0;i < size;i++)	
// 		printf("%d ",*(r+i));
// }