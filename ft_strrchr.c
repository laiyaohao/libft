/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 18:45:35 by ylai              #+#    #+#             */
/*   Updated: 2024/05/29 19:46:13 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include "ft_strlen.c"

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
	char	*s1_cpy;
	size_t	len;
	char	c_typed;

	len = ft_strlen(s);
	s1_cpy = (char *)s;
	c_typed = (char) c;
	while (len >= 0)
	{
		if (s[len] == c_typed)
		{
			return (&(s1_cpy[len]));
		}
		len--;
	}
	return (0);
}

// int	main(void)
// {
// 	char		str2[] = "bonjour";
// 	char *ans = ft_strrchr(str2, '\0');
// 	printf("ans: ");
// 	write(1, ans, 1);
// 	write(1, "\n",1);
// }