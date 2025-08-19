/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerber <angerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 11:27:31 by angerber          #+#    #+#             */
/*   Updated: 2025/08/14 18:59:33 by angerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	number;
	int	parity;

	number = 0;
	parity = 0;
	while (*str == ' ' || (*str <= 13 && *str >= 9))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			parity++;
		str++;
	}
	while (*str <= '9' && *str >= '0')
	{
		number = number * 10 + (*str - 48);
		str++;
	}
	if (parity % 2 == 0)
		return (number);
	else
		return (number * -1);
}

int main()
{
	char *Fanni = "----++211.12.13";
	printf("%d", ft_atoi(Fanni));
}