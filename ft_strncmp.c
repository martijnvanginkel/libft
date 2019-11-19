/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-gin <mvan-gin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 15:33:10 by mvan-gin       #+#    #+#                */
/*   Updated: 2019/11/19 16:03:03 by mvan-gin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t x;

	if (n == 0)
		return (0);
	x = 0;
	while (s1[x] == s2[x] && s1[x] != '\0' && s2[x] != '\0' && x < (n - 1))
	{
		x++;
	}
	return (((int)((unsigned char)s1[x])) - ((int)((unsigned char)s2[x])));
}
