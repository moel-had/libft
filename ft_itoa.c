/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-had <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 13:55:33 by moel-had          #+#    #+#             */
/*   Updated: 2021/11/17 17:09:15 by moel-had         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len(int nbr)
{
	int	i;

	i = 0;
	if (nbr == 0)
		return (1);
	while (nbr != 0)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int				len;
	char			*str;
	unsigned int	nbr;

	nbr = n;
	len = ft_len(n);
	if (n < 0)
	{
		nbr = -n;
		len++;
	}
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	while (len != 0)
	{
		str[len - 1] = nbr % 10 + 48;
		nbr = nbr / 10;
		len--;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
