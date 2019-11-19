/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-gin <mvan-gin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/31 16:19:39 by mvan-gin       #+#    #+#                */
/*   Updated: 2019/11/11 16:06:44 by mvan-gin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strjoin(char const *s1, char const *s2)
{
	char		*result;
	int			x;
	int			y;

	x = 0;
	y = 0;
	if (s1 == 0)
		return (0);
	result = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!result)
		return (0);
	while (s1[x] != '\0')
	{
		result[x] = s1[x];
		x++;
	}
	while (s2[y] != '\0')
	{
		result[x] = s2[y];
		x++;
		y++;
	}
	result[x] = '\0';
	return (result);
}
