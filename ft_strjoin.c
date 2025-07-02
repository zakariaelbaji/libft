/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-baji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:41:35 by zel-baji          #+#    #+#             */
/*   Updated: 2024/11/01 18:37:12 by zel-baji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		s1_ln;
	int		s2_ln;
	char	*result;
	char	*start;

	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	s1_ln = ft_strlen(s1);
	s2_ln = ft_strlen(s2);
	result = (char *)malloc((s1_ln + s2_ln + 1) * sizeof(char));
	if (!result)
		return (NULL);
	start = result;
	while (*s1)
		*result++ = *s1++;
	while (*s2)
		*result++ = *s2++;
	*result = '\0';
	return (start);
}
/*
int	main(void)
{
	char	s1[] = "hello";
	char	s2[] = "world ";
	char	*result;

	result = ft_strjoin(s1, s2);
	printf("%s", result);
	return (0);
}*/
