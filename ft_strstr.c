/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerber <angerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 22:20:16 by angerber          #+#    #+#             */
/*   Updated: 2025/08/09 14:04:04 by angerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*haystack;
	char	*needle;

	if (*to_find == 0)
		return (str);
	while (*str != '\0')
	{
		needle = to_find;
		haystack = str;
		while (*needle && *haystack && (*haystack == *needle))
		{
			needle++;
			haystack++;
		}
		if (*needle == '\0')
			return (str);
		str++;
	}
	return (0);
}

// int main()
// {
// 	char *search_in_this = "dog";
// 	char findme[] = "o";
// 	ft_strstr(search_in_this, findme);
// 	printf("return it here: %s \n\n", ft_strstr(search_in_this, findme));
// }
