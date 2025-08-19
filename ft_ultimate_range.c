/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerber <angerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 14:43:39 by angerber          #+#    #+#             */
/*   Updated: 2025/08/19 11:05:25 by angerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <string.h>
// #include <stdio.h>
// #include <stddef.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int *numbers;
	int size_counter;

	numbers = (int *)malloc((max - min) * sizeof(int));
	*range = numbers;

	size_counter = 0;
	if (numbers == NULL)
		return (-1);
	while (--max >= min)
	{
		numbers[size_counter] = min + size_counter;
		size_counter++;
	}
	return (size_counter);
}

int main(void)
{
	int *seven_eleven;
	int minimum = 2;
	int maximum = 8;
	int **what = 2;
	ft_ultimate_range(what, minimum, maximum);
	seven_eleven = ft_ultimate_range(what, minimum, maximum);
	// while(*seven_eleven)
	// {
	// 	printf(seven_eleven);
	// 	seven_eleven++;
	// }
	printf("\n\n");
}

int main(void)
{
	int	min = 12;
	int	max = 17;
	int *array;

	printf("%d\n", ft_ultimate_range(&array, min, max));
	return (0);
}