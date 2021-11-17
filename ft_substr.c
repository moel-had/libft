/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-had <moel-had@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 02:40:13 by moel-had          #+#    #+#             */
/*   Updated: 2021/11/16 18:33:52 by moel-had         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	n;
	char	*str;

	if (s == NULL)
		return (NULL);
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	n = 0;
	while (s[n] != '\0')
		n++;
	i = 0;
	if (start < n)
	{
		while (s[start] != '\0' && i < len)
		{
			str[i] = s[start];
			i++;
			start++;
		}
	}
	str[i] = '\0';
	return (str);
}
