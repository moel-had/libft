/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-had <moel-had@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 13:19:09 by moel-had          #+#    #+#             */
/*   Updated: 2021/11/16 18:33:31 by moel-had         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len1;
	size_t	len2;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len1 = ft_strlen((char *)s1);
	len2 = ft_strlen((char *)s2);
	str = malloc(sizeof(char) * (len1 + len2));
	if (str == NULL)
		return (NULL);
	memmove(str, s1, len1);
	memmove(str + len1, s2, len2);
	str[len1 + len2] = '\0';
	return (str);
}
