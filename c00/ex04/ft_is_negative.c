/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 07:26:19 by spoernba          #+#    #+#             */
/*   Updated: 2026/08/14 08:26:29 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_is_negative(int n)
{
	char	c;

	if (n >= 0)
	{
		c = 'P';
		write (1, &c, 1);
	}
	else
	{
		c = 'N';
		write (1, &c, 1);
	}
}

/*
int	main(int	argc, char	**argv)
{
	int n;

	if (argc >= 1)
	{
		n = atoi(argv[1]);
		ft_is_negative(n);
	}
	return(0);
}
*/
