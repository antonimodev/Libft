/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonimo <antonimo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:24:39 by antonimo          #+#    #+#             */
/*   Updated: 2024/04/09 10:01:14 by antonimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c <= 'Z' && c >= 'A') || (c <= 'z' && c >= 'a'))
		return (1);
	else
		return (0);
}

int	main(void)
{
	int	a;

	a = 'k';
	printf("Este es el resultado: %d.\n", ft_isalpha(a));
	return (0);
}
