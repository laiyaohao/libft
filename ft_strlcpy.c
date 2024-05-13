/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 21:00:58 by ylai              #+#    #+#             */
/*   Updated: 2024/05/13 21:42:56 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    int i;

    i = 0;
    if (size == 0)
    {
        return (0);
    }
    while (i < size - 1 && src)
    {
        dst[i] = src[i];
        src++;
        i++;
    }
    dst[i] = '\0';
    return (i);
}