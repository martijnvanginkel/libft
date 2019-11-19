/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-gin <mvan-gin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 16:05:58 by mvan-gin       #+#    #+#                */
/*   Updated: 2019/11/19 10:31:41 by tvan-cit      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*ptr1;
	char	*ptr2;
	size_t	x;

	x = 0;
	ptr1 = (char*)dst;
	ptr2 = (char*)src;
	if (!dst && !src)
	{
		return (dst);
	}
	while (x < n)
	{
		ptr1[x] = ptr2[x];
		x++;
	}
	return (dst);
}
