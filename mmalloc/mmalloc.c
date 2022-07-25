/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mmalloc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhleth <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:32:00 by amuhleth          #+#    #+#             */
/*   Updated: 2022/07/25 18:13:07 by amuhleth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_mem	*lstlast_mem(t_mem *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

void	lstadd_back_mem(t_mem **lst, t_mem *new)
{
	t_mem	*last;

	if (!lst)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		last = lstlast_mem(*lst);
		new->prev = last;
		last->next = new;
	}
}

void	*get_data_location(void *p)
{
	char	*ptr;

	ptr = p;
	return (ptr + sizeof(t_mem));
}

void	*mmalloc(t_mem **list, size_t size)
{
	void		*p;
	t_mem		*new;

	if (list == NULL)
		return (NULL);
	new = ft_calloc(size + sizeof(t_mem));
	if (!new)
		return (NULL);
	p = get_data_location(new);
	new->ptr = p;
	new->next = NULL;
	lstadd_back_mem(list, new);
	return (p);
}
