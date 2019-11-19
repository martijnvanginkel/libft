/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-gin <mvan-gin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 14:54:17 by mvan-gin       #+#    #+#                */
/*   Updated: 2019/11/19 16:06:32 by mvan-gin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	x;
	size_t	y;

	x = 0;
	y = 0;
	if (ft_strlen((char*)needle) == 0)
		return ((char*)haystack);
	if (ft_strlen((char*)haystack) == 0)
		return (0);
	while (haystack[x] != '\0' && x < len)
	{
		if (haystack[x] == needle[y])
		{
			y++;
			if (needle[y] == '\0')
				return ((char*)&haystack[(x - y) + 1]);
		}
		else
		{
			x -= y;
			y = 0;
		}
		x++;
	}
	return (0);
}
