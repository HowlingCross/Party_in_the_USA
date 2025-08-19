/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerber <angerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 17:04:56 by angerber          #+#    #+#             */
/*   Updated: 2025/08/12 09:46:47 by angerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0 || index == 1)
		return (index);
	if (index > 0)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	else
		return (0);
}

// int main()
// {
// 	int bailer = 6;
// 	printf("Your nth Fibonacci element: %d \n\n", ft_fibonacci(bailer));
// }
