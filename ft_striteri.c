/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-baji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:04:36 by zel-baji          #+#    #+#             */
/*   Updated: 2024/11/04 17:04:39 by zel-baji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void    ft_touper(unsigned int i, char *c)
{
	int		i;
	int		s_len;
	size_t	s_len;
	size_t	i;

	if(*c >= 'a' && *c <= 'z')
	{
			*c -= 32;
	}
}*/
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	s_len;
	size_t	i;

	if (!s || !f)
		return ;
	i = 0;
	s_len = ft_strlen(s);
	while (i < s_len)
	{
		f(i, &s[i]);
		i++;
	}
}
/*
 int main()
 {
		char str[] = "helloHHH";
		ft_striteri(str , ft_touper);
		printf("%s", str);
		return (0);
 }*/