/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 20:19:51 by ylai              #+#    #+#             */
/*   Updated: 2024/05/19 21:05:17 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	void	*s_cp;
	unsigned char	*s1;
	unsigned char	c1;

	i = 0;
	s_cp = (void *)s;
	s1 = (unsigned char *)s;
	c1 = (unsigned char)c;
	while (i < n)
	{
		if (*s1 == c1)
		{
			return (s_cp);
		}
		i++;
		s_cp++;
		s1++;
	}
	return (0);
}