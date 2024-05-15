/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:57:22 by ylai              #+#    #+#             */
/*   Updated: 2024/05/15 17:09:59 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief  
*/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	void	*temp_dest;
	void	*temp_src;
	int		flag;
	int		i;
	unsigned char	*dest_pt;
	unsigned char *src_pt;
	

	// set pointers to start of dest and src
	temp_dest = dest;
	temp_src = src;
	flag = 0;
	i = 0;
	// scan thru dest and src and see if they overlap
	while (temp_dest && temp_src)
	{
		if (temp_dest == temp_src)
		{
			flag = 1;
			break;
		}
		temp_src++;
		temp_dest++;
	}
	if (flag)
	{
		ft_memmove(dest, src, n);
		return ;
	}
	// reset pointer back to head
	temp_dest = dest;
	temp_src = src;
	*dest_pt = temp_dest;
	*src_pt = temp_src;
	while (i < n)
	{
		*dest_pt = src_pt;
		dest_pt++;
		src_pt++;
	}
	return (dest);
}
