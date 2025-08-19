/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerber <angerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 21:08:08 by angerber          #+#    #+#             */
/*   Updated: 2025/08/12 09:47:45 by angerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_is_prime(int nb)
{
	int	count;
	int	save;

	save = nb;
	count = 0;
	while (nb > 1)
	{
		if (save % nb == 0)
		{
			count++;
		}
		nb = nb - 1;
	}
	if (count == 1)
		return (1);
	else
		return (0);
}

// int main()
// {
// 	int is_it = 3;
// 	// Lists of primes: 2, 5, 11, 17, 23, 29, 41, 47, 53, 59,
// 	// 71, 83, 89, 101, 107, 113, 131, 137,149, 167, 173, 179,
// 	// 191, 197, 227, 233, 239, 251, 257, 263,  173, 179, 191,
// 	// 197, 227, 233, 239, 251, 257, 263;
// 	printf("One it prime, zero(null) for not: %d\n\n", ft_is_prime(is_it));
// }