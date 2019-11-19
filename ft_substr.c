/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-gin <mvan-gin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/31 15:27:23 by mvan-gin       #+#    #+#                */
/*   Updated: 2019/11/18 13:58:27 by mvan-gin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*result;
	unsigned int	x;
	unsigned int	y;

	x = start;
	y = 0;
	if (s == 0)
		return (0);
	if (start > ft_strlen((char*)s) - 1)
	{
		return (ft_strdup(""));
	}
	result = malloc(sizeof(char) * ((unsigned int)len + 1));
	if (!result)
		return (0);
	while (x < ((unsigned int)len) + start)
	{
		result[y] = s[x];
		x++;
		y++;
	}
	result[y] = '\0';
	return (result);
}
