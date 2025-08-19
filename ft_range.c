/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerber <angerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 14:46:14 by angerber          #+#    #+#             */
/*   Updated: 2025/08/13 17:33:03 by angerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <string.h>
// #include <stdio.h>
// #include <stddef.h>

int	*ft_range(int min, int max);

int	*ft_range(int min, int max)
{
	int	i;
	int	*numbers;

	numbers = (int *)malloc((max - min) * sizeof(int));
	if (min >= max)
		return (NULL);
	i = 0;
	if (numbers == NULL)
		return (NULL);
	while (--max >= min)
	{
		numbers[i] = min + i;
		i++;
	}
	return (numbers);
}

// int main(void)
// {
// 	int min = 10;
// 	int max = 17;
// 	ft_range(min, max);
// 	int *nums = ft_range(min, max);
// 	printf("This int arrays all values between min and max: \n");
// 	while (*nums)
// 	{
// 		printf("%d, ", *nums);
// 		nums++;
// 	}
// 	printf("\n\n");
// }