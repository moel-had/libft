/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-had <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 20:30:55 by moel-had          #+#    #+#             */
/*   Updated: 2021/11/18 21:20:16 by moel-had         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dst, const void *src, size_t n)
{
	int			i;
	char		*str1;
	char		*str2;

	i = 0;
	str1 = (char *)dst;
	str2 = (char *)src;
	while (n != 0)
	{
		str1[i] = str2[i];
		i++;
		n--;
	}
	return (dst);
}
