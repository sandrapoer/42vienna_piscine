/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 16:02:44 by spoernba          #+#    #+#             */
/*   Updated: 2026/08/25 16:39:14 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	c;

	if (nb < 0)
		return (0);
	result = 1;
	c = 1;
	while (c <= nb)
	{
		result = result * c;
		c++;
	}
	return (result);
}

/*
int	main(void)
{
    printf("%d\n", ft_iterative_factorial(5));
    printf("%d\n", ft_iterative_factorial(-3));
    printf("%d\n", ft_iterative_factorial(13));
	printf("%d\n", ft_iterative_factorial(0));
	return (0);
}
*/
