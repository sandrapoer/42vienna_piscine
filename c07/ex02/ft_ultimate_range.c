/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 10:27:27 by spoernba          #+#    #+#             */
/*   Updated: 2026/08/31 12:21:55 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	count;

	count = max - min;
	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc((count) * sizeof(int));
	if (*range == NULL)
		return (-1);
	while (i < (count))
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (count);
}

/*
int	main(int argc, char **argv)
{
	int	*range;
	int	i;
	int min = atoi(argv[1]);
	int max = atoi(argv[2]);

	if (argc != 3)
		return (1);
	i = 0;
	printf("%d\n", ft_ultimate_range(&range, min, max));
	while (i < (max - min))
	{
		printf("%d ", range[i]);
		i++;
	}
	printf("\n");
	free(range);
	range = NULL;
	return (0);
}
*/
