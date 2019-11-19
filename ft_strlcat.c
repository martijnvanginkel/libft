/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-gin <mvan-gin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 14:45:38 by mvan-gin       #+#    #+#                */
/*   Updated: 2019/11/19 10:49:17 by tvan-cit      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t x;
	size_t y;
	size_t dstlen;
	size_t srclen;
	size_t res;

	y = 0;
	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	if (dstsize == 0)
		return (srclen);
	x = dstlen;
	if (dstsize <= dstlen)
		res = (dstsize + srclen);
	else
		res = srclen + dstlen;
	while (x < (dstsize - 1) && src[y] != '\0' && dst != src)
	{
		dst[x] = src[y];
		x++;
		y++;
	}
	if (dstlen < dstsize)
		dst[x] = '\0';
	return (res);
}
