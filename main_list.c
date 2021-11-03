/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhleth <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:35:42 by amuhleth          #+#    #+#             */
/*   Updated: 2021/11/03 17:01:13 by amuhleth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	t_list	elem1;
	t_list	elem2;
	t_list	elem3;
	t_list	*begin;
	int		value;
	int		*p_value;

	begin = &elem1;
	elem1.next = &elem2;
	elem2.next = &elem3;
	elem3.next = NULL;

	value = 42;
	p_value = &value;
	elem3.content = &value;
	printf("Value : %d\n", value);
	printf("P_value : %d\n", *p_value);
	printf("Content : %d\n", *((int *) elem3.content));
	return (0);
}
