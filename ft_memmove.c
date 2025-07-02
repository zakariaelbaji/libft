/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-baji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 00:45:04 by zel-baji          #+#    #+#             */
/*   Updated: 2024/10/26 21:45:45 by zel-baji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (d == NULL && s == NULL)
		return (NULL);
	if (d > s)
	{
		i = n;
		while (i--)
			d[i] = s[i];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
/*
int	main(void)
{
	char src[] = "hello, world!";

	ft_memmove(src+3, src, 9);
	printf("%s\n", src);
	return (0);
}
*/