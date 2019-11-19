/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_back_bonus.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-gin <mvan-gin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/05 13:54:14 by mvan-gin       #+#    #+#                */
/*   Updated: 2019/11/18 14:43:43 by mvan-gin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list **temp;

	temp = 0;
	if (alst == 0 || new == 0)
	{
		return ;
	}
	if (*alst == 0)
	{
		*alst = new;
		return ;
	}
	temp = alst;
	while ((*temp)->next != 0)
	{
		(*temp) = (*temp)->next;
	}
	(*temp)->next = new;
}
