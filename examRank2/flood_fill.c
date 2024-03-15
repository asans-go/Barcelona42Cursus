/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asans-go <asans-go@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 19:20:08 by asans-go          #+#    #+#             */
/*   Updated: 2024/03/11 19:26:03 by asans-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flood_fill.h"
#include <stdio.h>
#include <stdlib.h>

void	flood(char **tab, t_point size, int x, int y, char to_fill)
{
	if (x < 0 || y < 0)
		return ;
	if (x == size.x || y == size.y)
		return ;
	if (tab[y][x] != to_fill)
		return ;
	if (tab[y][x])
		tab[y][x] = 'F';
	flood(tab, size, x + 1, y, to_fill);
	flood(tab, size, x - 1, y, to_fill);
	flood(tab, size, x, y + 1, to_fill);
	flood(tab, size, x, y - 1, to_fill);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	int		x;
	int		y;
	char	to_fill;

	x = begin.x;
	y = begin.y;
	to_fill = tab[y][x];
	flood(tab, size, x, y, to_fill);
}
