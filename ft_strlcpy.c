/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 21:00:58 by ylai              #+#    #+#             */
/*   Updated: 2024/05/16 23:26:59 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0 || src[i] == '\0')
	{
		return (0);
	}
	while (i < size - 1 && src[i])
	{
		dst[i] = src[i];
		src++;
		i++;
	}
	dst[i] = '\0';
	return (i);
}