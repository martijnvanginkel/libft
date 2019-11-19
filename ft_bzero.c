/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-gin <mvan-gin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 15:38:08 by mvan-gin       #+#    #+#                */
/*   Updated: 2019/11/19 10:30:18 by tvan-cit      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;
	size_t	x;

	x = 0;
	ptr = (char*)s;
	while (x < n)
	{
		ptr[x] = '\0';
		x++;
	}
	return ;
}
