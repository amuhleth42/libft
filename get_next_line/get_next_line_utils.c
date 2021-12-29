/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhleth <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:36:30 by amuhleth          #+#    #+#             */
/*   Updated: 2021/12/06 21:41:49 by amuhleth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	size;
	char	*result;
	int		start;

	if (!s1 || !s2)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	result = (char *) malloc(sizeof(char) * size);
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1, size);
	start = ft_strlen(result);
	ft_strlcpy(result + start, (char *) s2, size - start);
	return (result);
}

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	result;
	size_t	i;

	result = ft_strlen(src);
	i = 0;
	while (src[i] && i < dstsize - 1 && dstsize != 0)
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize != 0)
		dst[i] = '\0';
	return (result);
}

char	*ft_strchr(const char *s, int c)
{
	char	chr;

	if (s == NULL)
		return (NULL);
	chr = (char) c;
	while (*s)
	{
		if (*s == chr)
			return ((char *) s);
		s++;
	}
	if (*s == chr)
		return ((char *) s);
	return (NULL);
}

char	*ft_strdup(const char *s1)
{
	char	*cpy;
	int		len;
	int		i;

	len = ft_strlen(s1);
	cpy = (char *) malloc(sizeof(char) * (len + 1));
	if (cpy == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		cpy[i] = s1[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
