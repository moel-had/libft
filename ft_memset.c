/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-had <moel-had@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 05:25:44 by moel-had          #+#    #+#             */
/*   Updated: 2021/11/16 18:43:51 by moel-had         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*str;
	int		i;

	str = (char *)b;
	i = 0;
	while (len != 0)
	{
		str[i] = (unsigned char)c;
		i++;
		len--;
	}
	return (b);
}
