/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gridcheck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krtrzcin <krtrzcin@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 11:04:00 by krtrzcin          #+#    #+#             */
/*   Updated: 2026/08/23 15:55:43 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	leftright(int grid[6][6], int row)
{
	int	visi;
	int	col;
	int	max;

	col = 1;
	visi = 0;
	max = 0;
	while (col < 5)
	{
		if (grid[row][col] > max)
		{
			max = grid[row][col];
			visi++;
		}
		col++;
	}
	return (visi);
}

int	rightleft(int grid[6][6], int row)
{
	int	visi;
	int	col;
	int	max;

	col = 4;
	visi = 0;
	max = 0;
	while (col > 0)
	{
		if (grid[row][col] > max)
		{
			max = grid[row][col];
			visi++;
		}
		col--;
	}
	return (visi);
}

int	topbot(int grid[6][6], int col)
{
	int	visi;
	int	row;
	int	max;

	row = 1;
	visi = 0;
	max = 0;
	while (row < 5)
	{
		if (grid[row][col] > max)
		{
			max = grid[row][col];
			visi++;
		}
		row++;
	}
	return (visi);
}

int	bottop(int grid[6][6], int col)
{
	int	visi;
	int	row;
	int	max;

	row = 4;
	visi = 0;
	max = 0;
	while (row > 0)
	{
		if (grid[row][col] > max)
		{
			max = grid[row][col];
			visi++;
		}
		row--;
	}
	return (visi);
}

int	checkvisi(int grid[6][6])
{
	int	c;

	c = 1;
	while (c < 5)
	{
		if (leftright(grid, c) != grid[c][0])
			return (0);
		if (rightleft(grid, c) != grid[c][5])
			return (0);
		if (topbot(grid, c) != grid[0][c])
			return (0);
		if (bottop(grid, c) != grid[5][c])
			return (0);
		c++;
	}
	return (1);
}
