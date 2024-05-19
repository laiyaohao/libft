/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 23:51:37 by ylai              #+#    #+#             */
/*   Updated: 2024/05/19 16:17:21 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned long long	t_size;
	void				*pter;
	unsigned long long	i;

	i = 0;
	t_size = nmemb * size;
	if (t_size > INT_MAX)
	{
		return (NULL);
	}
	pter = (void *) malloc(t_size);
	if (pter == NULL)
	{
		return (0);
	}
	return (ft_memset(pter, 0, t_size));
}
