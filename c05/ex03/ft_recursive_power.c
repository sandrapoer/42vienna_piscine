/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 10:08:06 by spoernba          #+#    #+#             */
/*   Updated: 2026/08/26 10:47:14 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power -1));
	
}

/*
int	main(int argc, char **argv)
{
	printf("%d\n", ft_recursive_power(atoi(argv[1]), atoi(argv[2])));
	return (0);
}
*/
