/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-baji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 14:45:13 by zel-baji          #+#    #+#             */
/*   Updated: 2024/10/31 14:46:24 by zel-baji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*nstr;
	int		s_len;
	int		i;

	s_len = ft_strlen(s);
	nstr = malloc(s_len + 1);
	if (!nstr)
	{
		return (NULL);
	}
	i = 0;
	while (s[i])
	{
		nstr[i] = s[i];
		i++;
	}
	nstr[i] = '\0';
	return (nstr);
}
/*int	main(void)
{
	char	*s;

	s = ft_strdup("hello");
	printf("%s\n", s);
	free(s);
	return (0);
}*/
