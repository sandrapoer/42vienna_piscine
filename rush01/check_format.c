/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 18:00:21 by spoernba          #+#    #+#             */
/*   Updated: 2026/08/23 16:59:16 by tslana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_format(char *arg)
{
	int	i;

	i = 0;
	while (i < 31)
	{
		if (i % 2 == 1)
		{
			if (arg[i] != ' ')
				return (0);
		}
		else if (arg[i] < '1' || arg[i] > '4')
			return (0);
		i++;
	}
	if (arg[31] != '\0')
		return (0);
	return (1);
}

void	fill_inputs(char *arg, int *inputs)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 31)
	{
		if (arg[i] != ' ')
		{
			inputs[j] = arg[i] - '0';
			j++;
		}
		i++;
	}
}

int	input_parser(char *arg, int *inputs)
{
	if (!check_format(arg))
	{
		write (1, "Error\n", 6);
		return (0);
	}
	fill_inputs(arg, inputs);
	return (1);
}
