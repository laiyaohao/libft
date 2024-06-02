/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 20:43:17 by ylai              #+#    #+#             */
/*   Updated: 2024/06/02 21:33:34 by ylai             ###   ########.fr       */
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
 * @note If `s` is `NULL`, returns `NULL`.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	ss_len;
	char	*ans;
	size_t	s_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (start > s_len)
		return (ft_strdup(""));
	ss_len = s_len - start;
	if (ss_len < len)
		len = ss_len;
	ans = (char *)malloc((len + 1) * (sizeof(char)));
	if (ans == NULL)
		return (NULL);
	ft_strlcpy(ans, s + start, len + 1);
	return (ans);
}
