/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 20:43:17 by ylai              #+#    #+#             */
/*   Updated: 2024/05/21 21:21:59 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ans;

	i = 0;
	ans = (char *)malloc(len * (sizeof(char)));
	if (ans == NULL)
	{
		return (NULL);
	}
	while (i < len)
	{
		ans[i] = s[start + i];
		i++;
	}
	ans[start + i] = '\0';
	return (ans);
}
