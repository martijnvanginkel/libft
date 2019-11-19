/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-gin <mvan-gin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 13:22:26 by mvan-gin       #+#    #+#                */
/*   Updated: 2019/11/12 12:18:25 by mvan-gin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t length)
{
	void			*begin;
	size_t			x;

	x = 0;
	begin = str;
	while (x < length)
	{
		((unsigned char*)str)[x] = (unsigned char)c;
		x++;
	}
	return (begin);
}
