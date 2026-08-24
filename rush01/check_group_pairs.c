/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_group_pairs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tslana <tslana@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 15:56:58 by tslana            #+#    #+#             */
/*   Updated: 2026/08/23 16:54:36 by tslana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_pair_column(char *string)
{
	int	i;

	i = 0;
	while (i <= 6)
	{
		if ((string[i] == '1' && string[i + 8] == '1')
			|| (string[i] == '4' && string[i + 8] == '4') || (string[i] == '3'
				&& string[i + 8] == '3'))
		{
			write(1, "Error\n", 6);
			return (0);
		}
		if ((string[i] == '2' && string[i + 8] == '4') || (string[i] == '4'
				&& string[i + 8] == '2') || (string[i] == '4'
				&& string[i + 8] == '3') || (string[i] == '3'
				&& string[i + 8] == '4'))
		{
			write(1, "Error\n", 6);
			return (0);
		}
		i = i + 2;
	}
	return (1);
}

int	check_pair_row(char *string)
{
	int	i;

	i = 16;
	while (i <= 22 && i >= 6)
	{
		if ((string[i] == '1' && string[i + 8] == '1')
			|| (string[i] == '4' && string[i + 8] == '4') || (string[i] == '3'
				&& string[i + 8] == '3'))
		{
			write(1, "Error\n", 6);
			return (0);
		}
		if ((string[i] == '2' && string[i + 8] == '4') || (string[i] == '4'
				&& string[i + 8] == '2') || (string[i] == '4'
				&& string[i + 8] == '3') || (string[i] == '3'
				&& string[i + 8] == '4'))
		{
			write(1, "Error\n", 6);
			return (0);
		}
		i = i + 2;
	}
	return (1);
}
