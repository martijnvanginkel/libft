/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-gin <mvan-gin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 09:41:49 by mvan-gin       #+#    #+#                */
/*   Updated: 2019/11/18 15:27:56 by mvan-gin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	void			*result;
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			x;

	x = 0;
	ptr1 = (unsigned char*)dst;
	ptr2 = (unsigned char*)src;
	while (x < n)
	{
		if (ptr2[x] == (unsigned char)c)
		{
			ptr1[x] = ptr2[x];
			x++;
			result = &ptr1[x];
			return (result);
		}
		ptr1[x] = ptr2[x];
		x++;
	}
	return ((void *)0);
}
