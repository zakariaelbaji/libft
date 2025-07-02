/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-baji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:32:54 by zel-baji          #+#    #+#             */
/*   Updated: 2024/10/29 14:54:02 by zel-baji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*m;
	unsigned char	*mm;

	if (s1 == NULL && s2 == NULL)
		return (0);
	i = 0;
	m = (unsigned char *)s1;
	mm = (unsigned char *)s2;
	while (i < n)
	{
		if (m[i] != mm[i])
		{
			return (m[i] - mm[i]);
		}
		i++;
	}
	return (0);
}

/*int main()
{
	char m[] = "nbc";
	char mm[] = "nbe";
	int mmm = ft_memcmp(m, mm, 3);
	printf("%d", mmm);
	return (0);
}*/
