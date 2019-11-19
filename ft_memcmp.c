/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-gin <mvan-gin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 11:42:29 by mvan-gin       #+#    #+#                */
/*   Updated: 2019/11/19 10:36:16 by tvan-cit      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			x;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	x = 0;
	ptr1 = (unsigned char*)s1;
	ptr2 = (unsigned char*)s2;
	if (s1 == s2 || n == 0)
	{
		return (0);
	}
	while (x < n)
	{
		if (ptr1[x] != ptr2[x])
		{
			return (((int)ptr1[x]) - ((int)ptr2[x]));
		}
		x++;
	}
	return (0);
}
