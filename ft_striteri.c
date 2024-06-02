/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 21:55:25 by ylai              #+#    #+#             */
/*   Updated: 2024/06/02 20:06:15 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Applies a function to each character of a string.
 * @param s The string to apply the function to.
 * @param f The function to apply.
 * @return None.
 * @note The function must be able to work on a NULL pointer.
 * @note The function must be able to work on an empty string.
 * @note The function must be able to work on a string of length 1.
 * @note The function must not modify the string passed as argument.
 * @note The function must be able to work on a string of any length.
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;
	size_t	len;

	if (f == NULL)
		return ;
	i = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		f(i, s);
		s++;
		i++;
	}
}
