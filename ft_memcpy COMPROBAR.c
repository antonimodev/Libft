/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy COMPROBAR.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonimo <antonimo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:23:24 by antonimo          #+#    #+#             */
/*   Updated: 2024/04/10 17:26:14 by antonimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* 
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int			i;
	char		*ptr;
	const char	*src2;

	ptr = dst;
	src2 = src;
	i = 0;
	while (i < n)
	{
		ptr[i] = src2[i];
		i++;
	}
	return (dst);
} */
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t					i;
	const unsigned char	*src2;

	src2 = src;
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = src2[i];
		i++;
	}
	return (dst);
}

/* - Void* has more size than char*.
- We've changed type of variables to store different types and
operate with those. This is because const cannot be modified.
- size_t type is used to represent bytes, cannot be negative. */