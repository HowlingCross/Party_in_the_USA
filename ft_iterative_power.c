/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerber <angerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 15:06:35 by angerber          #+#    #+#             */
/*   Updated: 2025/08/11 17:03:02 by angerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	number_save;

	number_save = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		power = power - 1;
		number_save *= nb;
	}
	return (number_save);
}

// int main(void)
// {
// 	int negyzetre = 2;
// 	int emelem = 8;
// 	printf("%d\n", ft_iterative_power(negyzetre, emelem));
// }