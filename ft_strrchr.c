/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 18:45:35 by ylai              #+#    #+#             */
/*   Updated: 2024/06/02 14:36:09 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Locates a character in string.
 *
 * This function finds the last occurance of int `c` in string
 * `s`.
 *
 * @param s Pointer to the string s.
 * @param c Value to find. The value is passed as an int.
 * @return Returns a pointer to the last occurance of the character 'c'
 *         in the string s.
 */
char	*ft_strrchr(const char *s, int c)
{
	char	*last_match;

	last_match = NULL;
	while (*s)
	{
		if (*s == (char)c)
		{
			last_match = (char *)s;
		}
		s++;
	}
	if ((char)c == 0)
		return ((char *)s + ft_strlen(s));
	return (last_match);
}
