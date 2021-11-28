/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-had <moel-had@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 00:10:50 by moel-had          #+#    #+#             */
/*   Updated: 2021/11/27 18:47:22 by moel-had         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(const char *str, char c)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (str[i] != '\0')
	{
		if ((str[i] != c && str[i] != '\0') && (str[i + 1] == c
				|| str[i + 1] == '\0'))
			n++;
		i++;
	}
	return (n);
}

static char	*ft_dup(const char *src, int start, int finish)
{
	char	*dest;
	int		i;

	i = 0;
	dest = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
	{
		dest[i] = src[start];
		i++;
		start++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	int		j;
	int		count;
	char	**split;

	split = malloc((ft_count(s, c) + 1) * sizeof(char *));
	if (split == NULL)
		return (NULL);
	i = 0;
	j = 0;
	count = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && count < 0)
			count = i;
		else if ((s[i] == c || i == ft_strlen(s)) && count >= 0)
		{
			split[j] = ft_dup(s, count, i);
			count = -1;
			j++;
		}
		i++;
	}
	split[j] = NULL;
	return (split);
}
