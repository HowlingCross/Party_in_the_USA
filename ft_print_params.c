/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerber <angerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 10:25:07 by angerber          #+#    #+#             */
/*   Updated: 2025/08/14 11:45:25 by angerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	strwrite(char *s)
{
	while (*s)
	{
		write(1, s, 1);
		s++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (i < argc)
	{
		strwrite(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
