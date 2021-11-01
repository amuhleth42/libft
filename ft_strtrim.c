/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhleth <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 17:18:34 by amuhleth          #+#    #+#             */
/*   Updated: 2021/11/01 18:00:29 by amuhleth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*p_start;
	int		i;

	p_start = (char *) s1;
	i = 0;
	while (set[i])
	{
		if (set[i] == *p_start)
		{
			p_start++;
			i = 0;
		}
		else
			i++;
	}
	return (p_start);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%s\n", ft_strtrim(argv[1], argv[2]));
	}
	return (0);
}
