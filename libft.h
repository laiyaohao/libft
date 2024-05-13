/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 18:20:18 by ylai              #+#    #+#             */
/*   Updated: 2024/05/13 21:52:59 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
void    bzero(void *s, size_t n);
size_t  strlen(char *c);
void    *memcpy(void *dest, void *src, size_t n);
void    *memset(void *s, int c, size_t n);
char    *ft_strchr(const char *s, int c);
size_t  ft_strlcpy(char *dst, const char *src, size_t size);

#endif
