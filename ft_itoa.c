/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 00:46:58 by ylai              #+#    #+#             */
/*   Updated: 2024/05/22 18:13:58 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_neg(int n)
{
	int	neg;

	if (n < 0)
	{
		neg = 1;
	}
	else
	{
		neg = 0;
	}
	return (neg);
}

long	my_abs(long len)
{
	int	ans;

	if (len < 0)
		return (-len);
	return (len);
}

int	find_len(int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	int		neg;
	long	modulo;
	char	*ans;

	len = find_len(n);
	if (n == 0)
		len = 1;
	modulo = 10;
	neg = check_neg(n);
	ans = (char *) malloc(sizeof(char) * (len + neg + 1));
	ans[len + neg] = '\0';
	while (len--)
	{
		ans[len + neg] = ((my_abs(n % modulo)) / (modulo / 10)) + 48;
		modulo *= 10;
	}
	if (neg)
		ans[0] = '-';
	return (ans);
}
