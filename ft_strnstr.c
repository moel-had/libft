/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-had <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 19:54:44 by moel-had          #+#    #+#             */
/*   Updated: 2021/11/28 20:37:25 by moel-had         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str1;
	char	*str2;

	i = 0;
	str1 = (char *)haystack;
	str2 = (char *)needle;
	if (ft_strlen(str2) == 0)
		return (str1);
	while (i < len && str1[i] != '\0')
	{
		j = 0;
		while (str1[i + j] == str2[j] && str1[i + j] && str2[j] && i + j < len)
			j++;
		if (str2[j] == '\0')
			return (str1 + i);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	char	s[] = "Hello World!!!!!";
	char	str[] = "World";

	printf("%s\n", ft_strnstr(s, str, 10));
}
*/
