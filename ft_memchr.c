/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-baji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:13:14 by zel-baji          #+#    #+#             */
/*   Updated: 2024/10/28 20:04:32 by zel-baji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
			return ((void *)(p + i));
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	//char s[] = "helo bbbbbbbbc";
	//int me[] = {5, 4, 3, 1, 2, 5};
	//int *mee = ft_memchr(s, 'l', sizeof(s));
	//if (!mee)
	//{
	//	printf("fryguhnjimk");
	//}
	//int i = 0;
	//while (i < 4)
	//{
	//printf("%s\n",mee);
	//i++;
	//}
	//return (0);
}*/
