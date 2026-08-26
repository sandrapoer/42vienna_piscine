/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 09:28:33 by spoernba          #+#    #+#             */
/*   Updated: 2026/08/26 10:07:26 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_iterative_power(int nb, int power)
{
	int	initial_nr;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	initial_nr = nb;
	while (power > 1)
	{
		nb = nb * initial_nr;
		power--;
	}
	return (nb);
}

/*
int	main(int argc, char **argv)
{
	printf("%d\n", ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
	return(0);
}
*/
