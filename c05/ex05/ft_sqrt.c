/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 12:17:19 by spoernba          #+#    #+#             */
/*   Updated: 2026/08/26 12:33:08 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_sqrt(int nb)
{
	int	root;

	root = 1;
	while ((root * root) < nb)
		root++;
	if ((root * root) == nb)
		return (root);
	else
		return (0);
}

/*
int	main(int argc, char **argv)
{
	printf("%d\n", ft_sqrt(atoi(argv[1])));
	return (0);
}
*/
