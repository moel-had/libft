/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-had <moel-had@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:50:00 by moel-had          #+#    #+#             */
/*   Updated: 2021/11/16 18:33:16 by moel-had         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	char	ca;
	int		i;

	i = 0;
	ca = (char)c;
	str = (char *)s;
	while (str[i] != '\0')
	{
		if (str[i] == ca)
			return (str + i);
		i++;
	}
	return (0);
}
