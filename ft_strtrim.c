/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 02:36:08 by ylai              #+#    #+#             */
/*   Updated: 2024/06/02 16:01:43 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*t_set;
	size_t	i;
	size_t	j;
	size_t	size;

	len = 0;
	i = 0;
	j = 0;
	t_set = (char *)set;
	len = ft_strlen(s1);
	while (i < len && ft_strchr(t_set, s1[i]) != NULL)
	{
		i++;
	}
	while (j < len && ft_strrchr(t_set, s1[len - j - 1]) != NULL)
	{
		j++;
	}
	if (i == len && j == len)
		return (ft_substr(s1, 0, 0));
	size = len - i - j;
	return (ft_substr(s1 + i, 0, size));
}
