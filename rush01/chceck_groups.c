/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chceck_groups.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tslana <tslana@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 15:56:58 by tslana            #+#    #+#             */
/*   Updated: 2026/08/23 17:31:13 by tslana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_pair_column(char *string);
int	check_pair_row(char *string);

int	check_chars(char *string)
{
	int	i;

	i = 0;
	while (string[i] != '\0')
	{
		if ((string[i] < '1' || string[i] > '4') && string[i] != ' ')
		{
			write(1, "Error\n", 6);
			return (0);
		}
		i++;
	}
	return (1);
}

int	check_sum(char *string)
{
	int	i;
	int	sum;

	i = 0;
	while (i <= 24)
	{
		sum = string[i] + string[i +2] + string[i +4] + string[i +6] -192;
		if (sum < 7 || sum > 10)
		{
			write(1, "Error\n", 6);
			return (0);
		}
		i = i + 8;
	}
	return (1);
}

int	check_for_one(char *str)
{
	int	i;
	int	one_counter;

	i = 0;
	while (i <= 24)
	{
		one_counter = 0;
		if (str[i] == '1')
			one_counter++;
		if (str[i + 2] == '1')
			one_counter++;
		if (str[i + 4] == '1')
			one_counter++;
		if (str[i + 6] == '1')
			one_counter++;
		if (one_counter != 1)
		{
			write(1, "Error\n", 6);
			return (0);
		}
		i = i + 8;
	}
	return (1);
}

int	input_pair_check(char *str)
{
	if (!check_chars(str))
		return (0);
	if (!check_sum(str))
		return (0);
	if (!check_for_one(str))
		return (0);
	if (!check_pair_column(str))
		return (0);
	if (!check_pair_row(str))
		return (0);
	return (1);
}
