/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerber <angerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 14:43:35 by angerber          #+#    #+#             */
/*   Updated: 2025/08/13 17:21:44 by angerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int	fstrlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*n;
	char	*save;

	n = (char *)malloc(sizeof(char) * fstrlen(src) + 1);
	if (n == NULL)
		return (NULL);
	save = n;
	while (*src)
	{
		*n = *src;
		src++;
		n++;
	}
	*n = 0;
	return (save);
}

// int main(int argc, char *argv[])
// {
//	//(void)argc;	
// 	char *quedate;
// 	quedate = (argv[1]);
// 	printf(":%s:\n", (quedate));
// }
