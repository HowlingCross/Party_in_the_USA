/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerber <angerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 10:25:10 by angerber          #+#    #+#             */
/*   Updated: 2025/08/12 10:48:55 by angerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	strlenght(char *arg)
{
	int	c;

	c = 0;
	while (arg[c] != 0)
		c++;
	return (c);
}

int	main(int argc, char *argv[])
{
	(void)argc;
	write(STDOUT_FILENO, argv[0], strlenght(argv[0]));
	write(STDOUT_FILENO, "\n", 1);
}
