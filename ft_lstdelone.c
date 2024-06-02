/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 21:53:29 by ylai              #+#    #+#             */
/*   Updated: 2024/06/02 21:15:09 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Deletes and frees the given node, and every
 *        successor of that node, using the function
 *        ’del’ and free(3).
 * @param `*lst` The node to delete.
 * @param `*del` The address of function used to delete the content of the node.
 * @return None.
 * @note The memory of ’next’ must not be freed.
*/
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (del == NULL)
		return ;
	if (lst)
	{
		del(lst->content);
		free(lst);
	}
}
