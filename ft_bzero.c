/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-had <moel-had@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 14:48:26 by moel-had          #+#    #+#             */
/*   Updated: 2021/12/01 21:18:17 by moel-had         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft.h"

void	ft_bzero(void *b, size_t n)
{
	char	*dest;
	int		i;

	dest = (char *)b;
	i = 0;
	while (n != 0)
	{
		dest[i] = 0;
		i++;
		n--;
	}
}
