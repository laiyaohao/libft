/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 00:17:16 by ylai              #+#    #+#             */
/*   Updated: 2024/06/02 20:04:19 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copies the string pointed to by src, including the terminating null
 * byte (\0), to the buffer pointed to by dest.
 * @param s The string to copy.
 * @return A pointer to the duplicated string.
 * @details If the allocation fails, NULL is returned.
 * 		Otherwise, a pointer to the duplicated string is returned.
 * 		Both strings are guaranteed to be null-terminated.
*/
char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*ans;
	size_t	i;

	i = 0;
	len = ft_strlen(s);
	ans = (char *) malloc((len + 1) * sizeof(char));
	if (ans == NULL)
		return (NULL);
	while (i < len)
	{
		ans[i] = s[i];
		i++;
	}
	ans[i] = '\0';
	return (ans);
}
