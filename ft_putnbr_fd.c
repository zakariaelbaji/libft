/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-baji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 22:42:47 by zel-baji          #+#    #+#             */
/*   Updated: 2024/11/05 23:23:40 by zel-baji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar(n % 10 + '0', fd);
	}
	else
	{
		ft_putchar(n + '0', fd);
	}
}
