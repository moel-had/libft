/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-had <moel-had@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 16:32:46 by moel-had          #+#    #+#             */
/*   Updated: 2021/11/25 01:47:46 by moel-had         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main()
{
	int fd = open("test", O_WRONLY);
	ft_putchar_fd('T', fd);
	printf("%d\n", fd);
}
*/
