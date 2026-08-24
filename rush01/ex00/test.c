/* ************************************************************************** */
/*                                                                            */
/*   rush01.c - 4x4 skyscrapers solver (hardcoded for 4x4)                    */
/*                                                                            */
/*   ./rush01 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"                               */
/*                                                                            */
/*   clues[0..3]   = col1top    col2top    col3top    col4top                 */
/*   clues[4..7]   = col1bottom col2bottom col3bottom col4bottom              */
/*   clues[8..11]  = row1left   row2left   row3left   row4left                */
/*   clues[12..15] = row1right  row2right  row3right  row4right               */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** Reads the 31-character input string: 16 digits '1'-'4' at the even
** positions, single spaces at the odd positions, '\0' at position 31.
** Returns 1 if the string is valid, 0 otherwise.
*/
int	parse_clues(char *arg, int *clues)
{
	int	i;

	i = 0;
	while (i < 31)
	{
		if (i % 2 == 0)
		{
			if (arg[i] < '1' || arg[i] > '4')
				return (0);
			clues[i / 2] = arg[i] - '0';
		}
		else if (arg[i] != ' ')
			return (0);
		i++;
	}
	if (arg[31] != '\0')
		return (0);
	return (1);
}

/*
** Counts how many boxes are visible when looking at four heights in the
** given order. A box is visible only if it is taller than every box
** before it.
*/
int	count_visible(int a, int b, int c, int d)
{
	int	visible;
	int	tallest;

	visible = 0;
	tallest = 0;
	if (a > tallest)
	{
		tallest = a;
		visible++;
	}
	if (b > tallest)
	{
		tallest = b;
		visible++;
	}
	if (c > tallest)
	{
		tallest = c;
		visible++;
	}
	if (d > tallest)
		visible++;
	return (visible);
}

/* Checks one finished row against its left clue and its right clue. */
int	check_row(int grid[4][4], int row, int *clues)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = grid[row][0];
	b = grid[row][1];
	c = grid[row][2];
	d = grid[row][3];
	if (count_visible(a, b, c, d) != clues[8 + row])
		return (0);
	if (count_visible(d, c, b, a) != clues[12 + row])
		return (0);
	return (1);
}

/* Checks one finished column against its top clue and its bottom clue. */
int	check_col(int grid[4][4], int col, int *clues)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = grid[0][col];
	b = grid[1][col];
	c = grid[2][col];
	d = grid[3][col];
	if (count_visible(a, b, c, d) != clues[col])
		return (0);
	if (count_visible(d, c, b, a) != clues[4 + col])
		return (0);
	return (1);
}

/*
** Returns 1 if 'value' does not appear yet in this row or this column.
** Empty cells hold 0, so they never match a value of 1-4.
*/
int	is_free(int grid[4][4], int row, int col, int value)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (grid[row][i] == value)
			return (0);
		if (grid[i][col] == value)
			return (0);
		i++;
	}
	return (1);
}

/*
** Fills the grid cell by cell, left to right and top to bottom.
** pos 0 is grid[0][0], pos 15 is grid[3][3].
** A row is checked as soon as its last cell (col 3) is placed.
** A column is checked as soon as its last cell (row 3) is placed.
** Returns 1 as soon as the grid is completely and correctly filled.
*/
int	solve(int grid[4][4], int *clues, int pos)
{
	int	row;
	int	col;
	int	value;

	if (pos == 16)
		return (1);
	row = pos / 4;
	col = pos % 4;
	value = 1;
	while (value <= 4)
	{
		if (is_free(grid, row, col, value))
		{
			grid[row][col] = value;
			if ((col < 3 || check_row(grid, row, clues))
				&& (row < 3 || check_col(grid, col, clues))
				&& solve(grid, clues, pos + 1))
				return (1);
			grid[row][col] = 0;
		}
		value++;
	}
	return (0);
}

/* Prints the 4x4 grid as four lines of "d d d d". */
void	print_grid(int grid[4][4])
{
	char	c;
	int		row;
	int		col;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			c = (char)('0' + grid[row][col]);
			write(1, &c, 1);
			if (col < 3)
				write(1, " ", 1);
			col++;
		}
		write(1, "\n", 1);
		row++;
	}
}

int	main(int argc, char **argv)
{
	int	grid[4][4] = {0};
	int	clues[16];

	if (argc != 2 || !parse_clues(argv[1], clues))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (!solve(grid, clues, 0))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	print_grid(grid);
	return (0);
}
