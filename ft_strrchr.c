/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-had <moel-had@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 22:04:16 by moel-had          #+#    #+#             */
/*   Updated: 2021/11/30 21:46:02 by moel-had         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	ca;
	int		i;

	i = 0;
	ca = (char)c;
	str = (char *)s;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (str[i] == ca)
			return (str + i);
		i--;
	}
	return (NULL);
}
