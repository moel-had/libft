/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-had <moel-had@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 00:41:13 by moel-had          #+#    #+#             */
/*   Updated: 2021/12/03 23:29:24 by moel-had         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_scan(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*str;
	int		i;
	int		d;
	int		f;

	if (s1 == NULL || set == NULL)
		return (NULL);
	d = 0;
	while (s1[d] != '\0' && ft_scan(set, s1[d]) == 1)
		d++;
	f = 0;
	while (s1[f] != '\0')
		f++;
	while (f > d && ft_scan(set, s1[f - 1]) == 1)
		f--;
	str = malloc(sizeof(char) * (f - d + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (d < f)
		str[i++] = s1[d++];
	str[i] = '\0';
	return (str);
}
