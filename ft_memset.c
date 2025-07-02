/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-baji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:13:50 by zel-baji          #+#    #+#             */
/*   Updated: 2024/10/25 01:26:15 by zel-baji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	int				i;

	p = (unsigned char *)s;
	i = 0;
	while (n > 0)
	{
		p[i] = (unsigned char)c;
		i++;
		n--;
	}
	return (s);
}
/*int	main(void)
{
	int	p[10];
	int	i;

	ft_memset(p, 0, 6);
	i = 0;
	while (i < 10)
	{
		printf("%d", p[i]);
		i++;
	}
	return (0);
}*/
