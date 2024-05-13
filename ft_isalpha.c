/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 15:23:34 by ylai              #+#    #+#             */
/*   Updated: 2024/05/13 16:51:53 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	islower(int c)
{
	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
	return (0);
}

static int	isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
	{
		return (1);
	}
	return (0);
}

int	isalpha(int c)
{
	if (!((islower(c)) || (isupper(c))))
	{
		return (0);
	}
	return (1);
}
