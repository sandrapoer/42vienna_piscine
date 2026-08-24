/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 14:25:20 by spoernba          #+#    #+#             */
/*   Updated: 2026/08/23 15:48:11 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	valid(int grid[6][6], int row, int col, int num);
int	checkvisi(int grid[6][6]);
int	solver(int grid[6][6]);

void	create_grid(int grid[6][6])
{
	int	x;
	int	y;

	x = 0;
	while (x < 6)
	{
		y = 0;
		while (y < 6)
		{
			grid[x][y] = 0;
			y++;
		}
		x++;
	}
}

void	fill_arguments(int grid[6][6], char *input)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		grid[0][i + 1] = input[i * 2] - '0';
		grid[5][i + 1] = input[i * 2 + 8] - '0';
		grid[i + 1][0] = input[i * 2 + 16] - '0';
		grid[i + 1][5] = input[i * 2 + 24] - '0';
		i++;
	}
}

void	print_grid(int grid[6][6])
{
	int		x;
	int		y;
	char	digit;

	x = 1;
	while (x < 5)
	{
		y = 1;
		while (y < 5)
		{
			digit = grid[x][y] + '0';
			write(1, &digit, 1);
			if (y < 4)
				write(1, " ", 1);
			y++;
		}
		write(1, "\n", 1);
		x++;
	}
}

int	rush(char *input, int grid[6][6])
{
	create_grid(grid);
	fill_arguments(grid, input);
	if (!solver(grid))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	print_grid(grid);
	return (1);
}
