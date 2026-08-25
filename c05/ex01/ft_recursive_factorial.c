/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 16:46:28 by spoernba          #+#    #+#             */
/*   Updated: 2026/08/25 16:54:10 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb <= 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb -1));
}

int main(void)
{
	printf("%d\n", ft_recursive_factorial(5));
    printf("%d\n", ft_recursive_factorial(-3));
    printf("%d\n", ft_recursive_factorial(13));
    printf("%d\n", ft_recursive_factorial(0));
	return(0);
}
