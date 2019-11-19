/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putendl_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-gin <mvan-gin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 13:06:54 by mvan-gin       #+#    #+#                */
/*   Updated: 2019/11/07 15:42:11 by mvan-gin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int x;

	x = 0;
	if (s == 0)
		return ;
	while (s[x] != '\0')
	{
		ft_putchar_fd(s[x], fd);
		x++;
	}
	ft_putchar_fd('\n', fd);
}
