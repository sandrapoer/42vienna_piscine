/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_latin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krtrzcin <krtrzcin@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 10:16:50 by krtrzcin          #+#    #+#             */
/*   Updated: 2026/08/23 17:08:10 by tslana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	checkrow(int grid[6][6], int row, int num)
{
	int	col;

	col = 1;
	while (col < 5)
	{
		if (grid[row][col] == num)
			return (0);
		col++;
	}
	return (1);
}

int	checkcol(int grid[6][6], int col, int num)
{
	int	row;

	row = 1;
	while (row < 5)
	{
		if (grid[row][col] == num)
			return (0);
		row++;
	}
	return (1);
}

int	valid(int grid[6][6], int row, int col, int num)
{
	if (!checkrow(grid, row, num))
	{
		return (0);
	}
	if (!checkcol(grid, col, num))
	{
		return (0);
	}
	return (1);
}
