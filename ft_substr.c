/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-baji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:58:58 by zel-baji          #+#    #+#             */
/*   Updated: 2024/10/31 17:40:59 by zel-baji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*st;
	size_t	i;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	st = (char *)malloc((len + 1) * sizeof(char));
	if (!st)
		return (NULL);
	i = 0;
	while (i < len)
	{
		st[i] = s[start + i];
		i++;
	}
	st[i] = '\0';
	return (st);
}
/*
 int main()
 {
	int len = 5;
		char *s = ft_substr("hello", 2, len);
		printf("%s\n", s);
		printf("%d\n",len);
		return (0);
 }*/
