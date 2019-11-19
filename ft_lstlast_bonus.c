/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstlast.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-gin <mvan-gin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/05 13:50:53 by mvan-gin       #+#    #+#                */
/*   Updated: 2019/11/07 14:41:44 by mvan-gin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == 0)
	{
		return (lst);
	}
	while (lst->next != 0)
	{
		lst = lst->next;
	}
	return (lst);
}
