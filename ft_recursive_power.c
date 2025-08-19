/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerber <angerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 16:56:32 by angerber          #+#    #+#             */
/*   Updated: 2025/08/12 10:01:50 by angerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	number_save;

	number_save = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		number_save *= nb;
		ft_recursive_power(nb, --power);
	}
	return (number_save);
}

// int main(void)
// {
// 	int negyzetre = 2;
// 	int emelem = 3;
// 	printf("%d", ft_recursive_power(negyzetre, emelem));
// }