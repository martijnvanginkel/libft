/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-gin <mvan-gin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 16:09:29 by mvan-gin       #+#    #+#                */
/*   Updated: 2019/11/19 11:09:27 by tvan-cit      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	size_t	len;
	int		x;

	x = 0;
	len = ft_strlen(s1);
	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (0);
	while (s1[x] != '\0')
	{
		ptr[x] = s1[x];
		x++;
	}
	ptr[x] = '\0';
	return (ptr);
}
