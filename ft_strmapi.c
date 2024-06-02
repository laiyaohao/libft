/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 21:32:24 by ylai              #+#    #+#             */
/*   Updated: 2024/06/02 17:18:39 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*ans;
	char	c_f;

	if (f == NULL)
		return ((char *) s);
	i = 0;
	len = ft_strlen(s);
	ans = (char *)malloc((len + 1) * sizeof(char));
	if (ans == NULL)
		return (NULL);
	while (i < len)
	{
		c_f = f(i, s[i]);
		ans[i] = c_f;
		i++;
	}
	ans[i] = '\0';
	return (ans);
}
