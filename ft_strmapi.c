/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-baji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:25:42 by zel-baji          #+#    #+#             */
/*   Updated: 2024/11/04 15:25:45 by zel-baji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char ft_tolower(unsigned int i, char c)
{
	char			*ptr;
	int				i;
	int				s_len;
	unsigned int	s_len;
	unsigned int	i;
	char			*ptr;

	if(c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	return (c);
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	s_len;
	unsigned int	i;
	char			*p;

	if (!s || !f)
		return (NULL);
	s_len = ft_strlen(s);
	p = malloc((s_len + 1) * sizeof(char));
	if (!p)
		return (NULL);
	i = 0;
	while (i < s_len)
	{
		p[i] = f(i, s[i]);
		i++;
	}
	p[i] = '\0';
	return (p);
}
/*int main()
{
	char *result = ft_strmapi("HELLO", ft_tolower);
	printf("%s", result);
}*/