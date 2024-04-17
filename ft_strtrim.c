/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonimo <antonimo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 13:04:10 by antonimo          #+#    #+#             */
/*   Updated: 2024/04/16 15:50:58 by antonimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t			start;
	size_t			end;
	unsigned char	*str;

	start = 0;
	end = ft_strlen(s1);
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (ft_strchr(set, s1[start]) != NULL)
	{
		start++;
	}
	while (ft_strrchr(set, s1[end - 1]) != NULL)
	{
		end--;
	}
	return (ft_substr(s1, start, end - start));
}

/*Con ft_substr me ahorro poner el malloc del string recortado
Con strchr y rchr revisamos si los caracteres de set estan en s1
En return ponemos end - start porque la string está recortada
¿Hay que contemplar excepción de errores?*/