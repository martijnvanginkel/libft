/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstsize.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-gin <mvan-gin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/05 13:48:08 by mvan-gin       #+#    #+#                */
/*   Updated: 2019/11/15 16:20:23 by mvan-gin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int x;

	x = 0;
	if (!lst)
	{
		return (0);
	}
	while (lst != 0)
	{
		lst = lst->next;
		x++;
	}
	return (x);
}
