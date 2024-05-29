/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 20:43:17 by ylai              #+#    #+#             */
/*   Updated: 2024/05/29 20:41:07 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Allocates (with `malloc(3)`) and returns a substring
 *        from the string `s`. The substring begins at index `start`
 *        and is of maximum size `len`.
 * @param s  The string from which to create the substring.
 * @param start The start index of the substring in the string `s`.
 * @param len The maximum length of the substring.
 * @return Returns the substring
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ans;
	char	*s_cp;
	size_t	s_len;

	i = 0;
	ans = (char *)malloc((len + 1) * (sizeof(char)));
	s_cp = (char *)s;
	s_len = ft_strlen(s);
	if (ans == NULL || start >= s_len)
	{
		return (NULL);
	}
	while (i < len && s_cp[start + i])
	{
		ans[i] = s_cp[start + i];
		i++;
	}
	ans[i] = '\0';
	return (ans);
}
