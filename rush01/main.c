/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krtrzcin <krtrzcin@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 13:22:23 by krtrzcin          #+#    #+#             */
/*   Updated: 2026/08/23 15:39:22 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_format(char *arg);
int	input_pair_check(char *argv);
int	rush(char *argv, int grid[6][6]);

int	main(int argc, char **argv)
{
	int	grid[6][6];

	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (!check_format(argv[1]))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (!input_pair_check(argv[1]))
		return (0);
	if (!rush(argv[1], grid))
		return (0);
	return (0);
}
