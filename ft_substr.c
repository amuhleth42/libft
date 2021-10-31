/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhleth <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 18:50:34 by amuhleth          #+#    #+#             */
/*   Updated: 2021/10/31 19:02:03 by amuhleth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*p;
	char	*result;
	size_t	result_len;

	p = (char *) &s[start];
	result_len = ft_strlen(p);
	if (len < result_len)
		result_len = len;
	result = (char *) malloc(sizeof(char) * (result_len + 1));
	if (!result)
		return (NULL);
	ft_strlcpy(result, p, result_len + 1);
	return (result);
}
