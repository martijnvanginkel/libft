/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-gin <mvan-gin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 11:06:12 by mvan-gin       #+#    #+#                */
/*   Updated: 2019/11/14 15:26:30 by mvan-gin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			x;
	void			*result;

	x = 0;
	result = 0;
	while (x < n)
	{
		if (((unsigned char*)s)[x] == (unsigned char)c)
		{
			result = (void*)&(s[x]);
			return (result);
		}
		x++;
	}
	return (result);
}
