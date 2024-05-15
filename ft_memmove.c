/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 14:41:32 by ylai              #+#    #+#             */
/*   Updated: 2024/05/15 17:22:44 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	// move n bytes from src to temp array
	// that does not overlap src or dest
	// then move the elements in temp array
	// to dest
	unsigned char	temp_arr[n];
	unsigned char	*src_map;
	int						i;
	
	i = 0;
	*src_map = src;
	while (i < n)
	{
		temp_arr[i] = src_map[i];
		i++;
	}
	i = 0;
	while ()
}