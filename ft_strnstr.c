/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-baji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:31:32 by zel-baji          #+#    #+#             */
/*   Updated: 2024/10/29 21:42:12 by zel-baji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*little == '\0')
		return ((char *)big);
	if (len == 0)
		return (NULL);
	i = 0;
	while (big[i] && i < len)
	{
		while (big[i + j] == little[j] && big[i + j] && i + j < len)
		{
			j++;
			if (little[j] == 0)
				return ((char *)(big + i));
		}
		i++;
		j = 0;
	}
	return (NULL);
}
/*
int	main(void)
{
	char str[] = "hello, world";
	char str1[] = "world";
	char *s = ft_strnstr(str, str1, 20);
	printf("%s", s);
	if(!s)
	{
		printf("not found");
	}
	return (0);
}*/
