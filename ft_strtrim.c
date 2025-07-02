/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-baji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 22:13:49 by zel-baji          #+#    #+#             */
/*   Updated: 2024/11/01 21:12:19 by zel-baji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_true(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char *s1, char *set)
{
	int		i;
	int		j;
	int		a;
	char	*result;

	i = 0;
	a = 0;
	if (!s1)
		return (NULL);
	while (s1[i] && is_true(s1[i], set))
		i++;
	j = ft_strlen(s1);
	while (j > i && is_true(s1[j - 1], set))
		j--;
	result = malloc((j - i + 1) * sizeof(char));
	if (!result)
		return (NULL);
	while (i < j)
	{
		result[a++] = s1[i++];
	}
	result[a] = '\0';
	return (result);
}
/*
int	main(void)
{
		char	s1[] = "aaaaaamaaaaaemobhomeoobe";
		char	*result;
		result = ft_strtrim(s1, "bea");
		printf("%s\n", result);
		return (0);
}*/
