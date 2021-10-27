/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhleth <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:47:41 by amuhleth          #+#    #+#             */
/*   Updated: 2021/10/27 14:08:34 by amuhleth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str);

int	ft_atoi(const char *str)
{
	unsigned int	nb;
	int				sign;

	nb = 0;
	sign = 1;
	if (*str == '-')
	{
		str++;
		sign = -1;
	}
	if (*str == '+' && sign == 1)
		str++;
	while ('0' <= *str && *str <= '9')
	{
		nb = (*str - '0') + (nb * 10);
		str++;
	}
	return (nb * sign);
}

/*int	main(int argc, char **argv)
{
	(void) argc;
	printf("Lib : %d\n", atoi(argv[1]));
	printf("Cust : %d\n", ft_atoi(argv[1]));
	return (0);
} */
