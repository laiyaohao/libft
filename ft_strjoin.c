/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 00:20:27 by ylai              #+#    #+#             */
/*   Updated: 2024/06/02 20:07:19 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Concatenates two strings.
 * @param s1 The first string.
 * @param s2 The second string.
 * @return The concatenated string.
 * @details If either s1 or s2 is NULL, returns NULL.
 * @details If the memory allocation fails, returns NULL.
 * 		Otherwise, a pointer to the concatenated string is returned.
 * 		Both strings are guaranteed to be null-terminated.
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*space;
	size_t	i;
	size_t	s1_l;
	size_t	s2_l;

	i = -1;
	s1_l = ft_strlen(s1);
	s2_l = ft_strlen(s2);
	len = s1_l + s2_l;
	space = (char *) malloc((len + 1) * sizeof(char));
	if (space == NULL)
		return (0);
	while (++i < s1_l)
		space[i] = s1[i];
	i = -1;
	while (++i < s2_l)
		space[s1_l + i] = s2[i];
	space[len] = '\0';
	return (space);
}
