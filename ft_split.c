/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-baji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 21:30:34 by zel-baji          #+#    #+#             */
/*   Updated: 2024/11/02 23:33:02 by zel-baji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	count_words(const char *str, char c)
{
	int	count;
	int	word;

	count = 0;
	word = 1;
	while (*str)
	{
		if (*str && word)
		{
			count++;
			word = 0;
		}
		else if (*str && *str == c)
			word = 1;
		str++;
	}
	return (count);
}

static	char	*malloc_word(const char *str, char c)
{
	int		len;
	int		i;
	char	*word;

	len = 0;
	i = 0;
	while (str[len] && str[len] != c)
		len++;
	word = malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static	void	free_s(char **s)
{
	int	i;

	i = 0;
	while (s[i])
		free(s[i++]);
	free(s);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		i;

	if (!s)
		return (NULL);
	ptr = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!ptr)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			ptr[i] = malloc_word(s, c);
			if (!ptr[i])
				return (free_s(ptr), NULL);
			i++;
		}
		while (*s && *s != c)
			s++;
	}
	return (ptr[i] = NULL, ptr);
}
/*
int	main(void)
{
	char	s[] = "ayo#zaka";
	char	**result;
	int		i;

	result = ft_split(s, '#');
	if (result)
	{
		i = 0;
		while (result[i])
		{
			printf("%s\n", result[i]);
			free(result[i]);
			i++;
		}
		free(result);
	}
	return (0);
}*/
