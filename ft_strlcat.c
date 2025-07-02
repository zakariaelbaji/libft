/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-baji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:26:18 by zel-baji          #+#    #+#             */
/*   Updated: 2024/10/30 17:28:53 by zel-baji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	if (!dst && !src)
		return (0);
	if (size == 0)
		return (ft_strlen(src));
	dest_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size <= dest_len)
		return (size + src_len);
	i = 0;
	while (src[i] && (dest_len + i) < (size - 1))
	{
		dst[dest_len + i] = src[i];
		i++;
	}
	dst[dest_len + i] = '\0';
	return (dest_len + src_len);
}
/*
 int main()
 {
		char src[] = "hell";
		char dest[20] = "world";
		//strlcat(dest, src, 5);
		size_t result = ft_strlcat(dest, src, 1);
		printf("%zu\n", result);
		printf("%s\n", dest);
 }*/
