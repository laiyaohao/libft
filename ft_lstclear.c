/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 21:56:04 by ylai              #+#    #+#             */
/*   Updated: 2024/05/22 22:12:54 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (del == NULL)
		return ;
	
	if (lst)
	{
		if (*lst)
		{
			while (*lst)
			{
				temp = (*(*lst)).next;
				ft_lstdelone(*lst, del);
				*lst = temp;
			}
		}
	}
}
