/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-baji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 21:22:08 by zel-baji          #+#    #+#             */
/*   Updated: 2024/11/01 23:13:16 by zel-baji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*ptr1;
	size_t			i;

	ptr = (unsigned char *)dest;
	ptr1 = (unsigned char *)src;
	i = 0;
	if (!ptr && !ptr1)
		return (NULL);
	while (i < n)
	{
		ptr[i] = ptr1[i];
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
//	char src[] = "abcdefg";
//	char dest[20] = "cdefg";
	int src[] = {3113, 31323, 42424, 8337, 293,3838};

	ft_memcpy(src+2 , src, 1);
	int i = 0;
	while(i < 3)
	{
				printf("%d\n", src[i]);
			i++;
	}
//	printf("%s\n", src);
//	printf("%s", dest);

	return (0);
}*/
