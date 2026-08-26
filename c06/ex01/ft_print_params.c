/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 15:46:42 by spoernba          #+#    #+#             */
/*   Updated: 2026/08/26 18:16:28 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i1;
	int	i2;

	i1 = 1;
	while (i1 < argc)
	{
		i2 = 0;
		while (argv[i1][i2] != '\0')
		{
			write(1, &argv[i1][i2], 1);
			i2++;
		}
		write(1, "\n", 1);
		i1++;
	}
	return (0);
}
