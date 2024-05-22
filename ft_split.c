/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 21:39:33 by ylai              #+#    #+#             */
/*   Updated: 2024/05/22 18:54:33 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	num_o(char const *s, char c)
{
	size_t	num;
	
	num = 0;
	while (*s)
	{
		if (*s == c)
			num++;
	}
	return (num);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	i;
	unsigned int	prev;
	char	*sub_s;
	char	**ans;
	size_t	size;

	i = 0;
	prev = 0;

	// find the number of occurance of c;
	// number of c determines the size of **size
	// need to add one for the null pointer
	size = num_o(s, c);
	ans = (char **) malloc(sizeof(char *) * (size + 1));
	while (*s)
	{
		if (*s == c)
		{
			// insert from backwards
			sub_s = (char *) malloc(sizeof(char) * prev);
			ft_substr(*s, start, len);
			free(sub_s);
			prev = i;
		}
		i++;
	}
}
