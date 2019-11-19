/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-gin <mvan-gin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/31 16:32:05 by mvan-gin       #+#    #+#                */
/*   Updated: 2019/11/15 11:41:17 by mvan-gin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int		char_in_string(char c, const char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] == c)
		{
			return (1);
		}
		x++;
	}
	return (0);
}

static char		*fill_result(size_t x, size_t y, const char *s1, char *result)
{
	size_t z;

	z = 0;
	while (x < y)
	{
		result[z] = s1[x];
		x++;
		z++;
	}
	result[z] = '\0';
	return (result);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	size_t		x;
	size_t		y;
	char		*result;

	if (s1 == 0)
		return (0);
	x = 0;
	y = (int)ft_strlen((char*)s1);
	while (char_in_string(s1[x], set) == 1 && s1[x] != '\0')
		x++;
	if (x == ft_strlen(s1))
		return (ft_strdup(""));
	while (char_in_string(s1[y - 1], set) == 1 && y > 0)
		y--;
	result = malloc(sizeof(char) * ((y - x) + 1));
	if (!result)
		return (0);
	result = fill_result(x, y, s1, result);
	return ((char*)result);
}
