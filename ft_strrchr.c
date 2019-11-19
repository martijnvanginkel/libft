/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-gin <mvan-gin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 14:29:24 by mvan-gin       #+#    #+#                */
/*   Updated: 2019/11/14 11:38:51 by mvan-gin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	char	d;
	int		len;

	ptr = 0;
	d = (char)c;
	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == d)
		{
			ptr = (char*)&s[len];
			return (ptr);
		}
		len--;
	}
	return (ptr);
}
