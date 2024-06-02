/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 21:53:20 by ylai              #+#    #+#             */
/*   Updated: 2024/06/02 20:09:46 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Appends the src string to the dst string, and returns the total length
 * of the string they have in common.
 * @param dst The destination string.
 * @param src The source string.
 * @param size The size of the destination buffer.
 * @return The total length of the string they have in common.
 * @note The function appends the src string to the dst string, and returns
 * the total length of the string they have in common.
 * If the size is 0, the function returns the length of src.
 * If the size is reached, the function returns the length of dst.
 * If the size is not reached, the function returns the length of dst + src.
*/
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	i;
	size_t	src_len;

	i = 0;
	dst_len = 0;
	src_len = ft_strlen(src);
	while (dst_len < size && dst[dst_len])
		dst_len++;
	if (size <= dst_len)
		return (src_len + size);
	while ((dst_len + i + 1) < size && src[i])
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	if (dst_len != size)
		dst[dst_len + i] = 0;
	return (dst_len + src_len);
}
