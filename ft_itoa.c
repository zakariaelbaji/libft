/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-baji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 15:36:32 by zel-baji          #+#    #+#             */
/*   Updated: 2024/11/03 15:36:57 by zel-baji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	alloc_len(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
	{
		count++;
	}
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long	nb;
	char	*ptr;
	int		len;

	nb = n;
	len = alloc_len(n);
	ptr = malloc(len + 1 * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	if (nb < 0)
	{
		ptr[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		ptr[0] = '0';
	ptr[len] = '\0';
	len--;
	while (nb != 0)
	{
		ptr[len] = nb % 10 + 48;
		nb /= 10;
		len--;
	}
	return (ptr);
}
/*int main()
{
  int o = 2147483649;
  char *p = ft_itoa(o);
  printf("%s\n", p);
}*/