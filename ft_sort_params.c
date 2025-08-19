/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerber <angerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 10:55:40 by angerber          #+#    #+#             */
/*   Updated: 2025/08/14 16:04:19 by angerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

void	ft_bubble(int size_of_argc, char *quedate[], int i, int j)
{	
	char	*t;

	i = 0;
	while (i < size_of_argc)
	{
		j = i + 1;
		while (j < size_of_argc)
		{
			if (ft_strcmp(quedate[i], quedate[j]) > 0)
			{
				t = quedate[j];
				quedate[j] = quedate[i];
				quedate[i] = t;
			}
			j++;
		}
		i++;
	}
}

void	ft_write(int size_of_argc, char *quedate[])
{
	int	a;
	int	b;

	a = 1;
	while (a < size_of_argc)
	{
		b = 0;
		while (quedate[a][b])
		{
			write(1, &quedate[a][b], 1);
			b++;
		}
		a++;
		write(1, "\n", 1);
	}
}

int	main(int argc, char *argv[])
{
	ft_bubble(argc, argv, 0, 0);
	ft_write(argc, argv);
}
