/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-had <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 19:47:08 by moel-had          #+#    #+#             */
/*   Updated: 2021/11/21 00:36:47 by moel-had         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (s == NULL)
		return ;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}
/*
void	ft_function(unsigned int i, char *str)
{
	(void)i;
	*str += 1;
	printf("|%s|\n", str);
}

int main()
{
	char	str[] = "0a2345678b";
	ft_striteri(str, ft_function);
	printf("%s\n", str);
}
*/
