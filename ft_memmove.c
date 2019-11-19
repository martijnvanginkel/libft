/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-gin <mvan-gin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 10:28:09 by mvan-gin       #+#    #+#                */
/*   Updated: 2019/11/19 10:34:08 by tvan-cit      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	x;

	x = 0;
	if (dst == 0 && src == 0)
		return (dst);
	if (src < dst)
	{
		x = len;
		while (x > 0)
		{
			x--;
			((unsigned char*)dst)[x] = ((unsigned char*)src)[x];
		}
		return (dst);
	}
	if (src >= dst)
	{
		while (x < len)
		{
			((unsigned char*)dst)[x] = ((unsigned char*)src)[x];
			x++;
		}
		return (dst);
	}
	return (dst);
}
