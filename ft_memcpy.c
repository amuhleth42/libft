/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhleth <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 17:02:20 by amuhleth          #+#    #+#             */
/*   Updated: 2021/10/27 17:46:59 by amuhleth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	//printf("\n%s[", src);
	unsigned char	*p_src;
	unsigned char	*p_dst;
	p_src = (unsigned char *) src;
	p_dst = (unsigned char *) dst;
	if (!src && !dst)
		return (NULL);
	while (n > 0)
	{
		*p_dst = *p_src;
		n--;
		p_dst++;
		p_src++;
	}
	return (dst);
}
