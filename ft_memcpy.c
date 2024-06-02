/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:57:22 by ylai              #+#    #+#             */
/*   Updated: 2024/06/02 21:10:10 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copies n bytes from memory area src to memory area dest.
 * @param `*dest` Destination memory area.
 * @param `*src` Source memory area.
 * @param n Number of bytes to copy.
 * @return A pointer to the destination memory area.
 * @details If dest and src overlap, behavior is undefined.
 * @details If n is 0, returns dest.
 */
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*temp_dest;
	unsigned char	*temp_src;
	size_t			i;

	temp_dest = (unsigned char *)dest;
	temp_src = (unsigned char *)src;
	i = 0;
	if (temp_dest == NULL && temp_src == NULL)
		return (NULL);
	while (i < n)
	{
		*temp_dest = *temp_src;
		temp_src++;
		temp_dest++;
		i++;
	}
	return (dest);
}
