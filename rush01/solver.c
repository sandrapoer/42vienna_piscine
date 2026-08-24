/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 15:24:37 by spoernba          #+#    #+#             */
/*   Updated: 2026/08/23 15:30:06 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	valid(int grid[6][6], int row, int col, int num);
int	checkvisi(int grid[6][6]);
int	solver(int grid[6][6]);

int	try_cell(int grid[6][6], int x, int y)
{
	int	num;

	num = 1;
	while (num <= 4)
	{
		if (valid(grid, x, y, num))
		{
			grid[x][y] = num;
			if (solver(grid))
				return (1);
			grid[x][y] = 0;
		}
		num++;
	}
	return (0);
}

int	solver(int grid[6][6])
{
	int	x;
	int	y;

	x = 1;
	while (x < 5)
	{
		y = 1;
		while (y < 5)
		{
			if (grid[x][y] == 0)
				return (try_cell(grid, x, y));
			y++;
		}
		x++;
	}
	return (checkvisi(grid));
}
