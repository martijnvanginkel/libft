/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-gin <mvan-gin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 12:59:50 by mvan-gin       #+#    #+#                */
/*   Updated: 2019/11/07 15:42:02 by mvan-gin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
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
}
