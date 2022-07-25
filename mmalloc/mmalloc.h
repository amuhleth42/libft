/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mmalloc.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhleth <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:25:14 by amuhleth          #+#    #+#             */
/*   Updated: 2022/07/25 18:17:44 by amuhleth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

typedef struct	s_mem t_mem;

typedef struct	s_mem
{
	void		*ptr;
	t_mmalloc	*prev;
	t_mmalloc	*next;
}				t_mem;

void	*mmalloc(t_mem **list, size_t size);
int		mfree(t_mem **lst, void *ptr);
int		mmalloc_free(void);
