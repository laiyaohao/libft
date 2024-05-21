/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 21:39:33 by ylai              #+#    #+#             */
/*   Updated: 2024/05/21 21:54:45 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	unsigned int	i;
	unsigned int	j;
	char	*sub_s;

	i = 0;
	j = 0;
	while (*s)
	{
		if (*s == c)
		{
			sub_s = (char *) malloc(sizeof(char) * j);
			free(sub_s);
		}
		i++;
		j = i;
	}
}