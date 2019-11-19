/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-gin <mvan-gin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 12:13:53 by mvan-gin       #+#    #+#                */
/*   Updated: 2019/11/19 12:21:15 by mvan-gin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t		x;
	size_t		srclen;

	if (!src || !dst)
		return (0);
	if (dstsize == 0)
	{
		return (ft_strlen(src));
	}
	x = 0;
	srclen = ft_strlen(src);
	while (src[x] != '\0' && x < dstsize - 1)
	{
		dst[x] = src[x];
		x++;
	}
	if (dst[x] != '\0')
		dst[x] = '\0';
	return (srclen);
}
