/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew_bonus.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-gin <mvan-gin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/05 10:05:59 by mvan-gin       #+#    #+#                */
/*   Updated: 2019/11/11 14:40:19 by mvan-gin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list *newelem;

	newelem = malloc(sizeof(*newelem));
	if (!newelem)
	{
		return (0);
	}
	newelem->content = content;
	newelem->next = 0;
	return (newelem);
}
