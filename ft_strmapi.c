/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-gin <mvan-gin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 12:21:42 by mvan-gin       #+#    #+#                */
/*   Updated: 2019/11/07 15:36:52 by mvan-gin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		x;
	int		strlen;
	char	*result;

	if (s == 0)
		return (0);
	x = 0;
	strlen = ft_strlen(s);
	result = malloc(strlen * sizeof(char) + 1);
	if (!result)
		return (0);
	while (x < strlen)
	{
		result[x] = f(x, s[x]);
		x++;
	}
	result[x] = '\0';
	return (result);
}
