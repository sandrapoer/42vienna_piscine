/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 12:47:52 by spoernba          #+#    #+#             */
/*   Updated: 2026/08/26 12:58:49 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_is_prime(int nb)
{
	int i;

	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	i = 2;
	while (i < nb)
	{
		if (nb % i != 0)
			i++;
		else
			return (0);
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!(ft_is_prime(nb)))
		nb++;
	return (nb);
}

/*
int main(int argc, char **argv)
{
    printf("%d\n", ft_find_next_prime(atoi(argv[1])));
    return (0);
}
*/
