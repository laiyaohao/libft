/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 01:43:11 by ylai              #+#    #+#             */
/*   Updated: 2024/06/02 21:33:12 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Returns the last element of a list.
 * @param lst The list to get the last element from.
 * @return The last element of the list.
 * @details If the list is empty, NULL is returned.
 * @details If the list contains only one element, that element is returned.
 * @details If the list contains multiple elements, the last element 
 * 		is returned
*/
t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
