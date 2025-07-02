/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-baji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 20:44:16 by zel-baji          #+#    #+#             */
/*   Updated: 2024/10/30 20:44:21 by zel-baji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	void	*ptr;

	if (count == 0 || size == 0)
		return (malloc(0));
	total_size = count * size;
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, total_size);
	return (ptr);
}
/*int main()
{
	int *arr = (int *)ft_calloc(5, sizeof(int));

	if (arr == NULL)
	{
		printf("Allocation failed\n");
		return (1);
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	free(arr);
	return (0);
}*/