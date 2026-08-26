/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 16:46:28 by spoernba          #+#    #+#             */
/*   Updated: 2026/08/26 09:27:57 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_recursive_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	result = nb * ft_recursive_factorial(nb -1);
	return (result);
}

/*
int main(int argc, char **argv)
{
	printf("%d\n", ft_recursive_factorial(atoi(argv[1])));
	return(0);
}
*/
