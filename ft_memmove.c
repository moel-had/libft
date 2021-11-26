/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-had <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 21:35:16 by moel-had          #+#    #+#             */
/*   Updated: 2021/11/25 02:27:07 by moel-had         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, int len)
{
	char	*str1;
	char	*str2;
	int		i;

	str1 = (char *)dst;
	str2 = (char *)src;
	if (str1 == NULL && str2 == NULL)
		return (NULL);
	i = 0;
	if (str1 > str2)
	{
		while (len > 0)
		{
			str1[len - 1] = str2[len - 1];
			len--;
		}
	}
	else
	{
		while (len > 0)
		{
			str1[i] = str2[i];
			i++;
			len--;
		}
	}
	return (dst);
}
