/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhleth <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:36:15 by amuhleth          #+#    #+#             */
/*   Updated: 2021/10/25 17:37:22 by amuhleth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isprint(int c);

int	isprint(int c)
{
	return (32 <= c && c <= 126);
}
