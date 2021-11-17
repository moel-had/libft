/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-had <moel-had@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 22:31:49 by moel-had          #+#    #+#             */
/*   Updated: 2021/11/16 18:31:56 by moel-had         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	ca;
	int				i;

	i = 0;
	ca = (unsigned char)c;
	str = (unsigned char *)s;
	while (n != 0)
	{
		if (str[i] == ca)
			return (str + i);
		i++;
		n--;
	}
	return (0);
}
