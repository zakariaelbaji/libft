/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-baji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:00:30 by zel-baji          #+#    #+#             */
/*   Updated: 2024/10/26 17:52:32 by zel-baji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = 0;
	while (src[src_len])
		src_len++;
	if (size == 0)
		return (src_len);
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}

/*
int	main(void)
{
	char	src[] = "hello";
	char	dest[4];

	printf("%ld\n", ft_strlcpy(dest, src, 0));
	printf("%s\n", dest);
}*/
