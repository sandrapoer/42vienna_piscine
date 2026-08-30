/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42viennta.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 07:26:41 by spoernba          #+#    #+#             */
/*   Updated: 2026/08/13 08:53:35 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


/*
int	main(int argc, char **argv)
{
	if (argc > 1)
		ft_putchar(argv[1][0]);
	return (0);
}
*/
