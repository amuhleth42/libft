/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhleth <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:39:09 by amuhleth          #+#    #+#             */
/*   Updated: 2021/10/25 17:43:27 by amuhleth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c);

int	ft_toupper(int c)
{
	if (ft_islower(c))
		c = c - 'a' + 'A';
	return (c);
}



int	tolower(int c);

int	tolower(int c)
{
	if (ft_isupper(c))
		c = c - 'A' + 'a';
	return (c);
}
