/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 18:45:35 by ylai              #+#    #+#             */
/*   Updated: 2024/05/19 21:54:06 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*s1_cpy;
	size_t	len;

	len = ft_strlen(s);
	s1_cpy = (char *)s;
	while (len--)
	{
		if (s1_cpy[len] == c)
		{
			return (s1_cpy + len);
		}
	}
	return (0);
}
