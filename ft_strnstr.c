/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 19:22:51 by ylai              #+#    #+#             */
/*   Updated: 2024/06/02 13:23:33 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*big_cp;
	size_t	i;
	size_t	j;
	size_t	l_l;
	size_t	b_l;

	i = 0;
	big_cp = (char *)big;
	l_l = ft_strlen(little);
	b_l = ft_strlen(big);
	if (l_l == 0)
		return (big_cp);
	while (i < len && i < b_l)
	{
		j = 0;
		if (big_cp[i] == little[j])
		{
			while (big_cp[i + j] == little[j] && j < l_l && (i + j) < len)
				j++;
			if (j == l_l)
				return (big_cp + i);
		}
		i++;
	}
	return (0);
}
