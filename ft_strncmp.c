/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-baji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 21:42:47 by zel-baji          #+#    #+#             */
/*   Updated: 2024/10/28 10:55:19 by zel-baji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*int	main(void)
{
	char	s1[] = "hhllo";
	char	s2[] = "hello";

	printf("%d", ft_strncmp(s1, s2, 3));
	return (0);
}*/
