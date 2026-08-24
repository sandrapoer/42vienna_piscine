/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 13:44:12 by spoernba          #+#    #+#             */
/*   Updated: 2026/08/24 16:09:08 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_atoi(char *str)
{
	int	c;
	int sign;
	int	number;

	c = 0;
	sign = 1;
	while (str[c] == ' ')
		c++;
	if (str[c]	== '-')
		sign = sign * -1;
		c++;
	if (str[c] == '+')
		c++;
	number = 0;
	while (str[c] >= 0 && str[c] <= 9)
	{
		number = str[c] * 10;
	}

	number = number * sign;
	return (number);
}

int main(void)
{
	printf("Atoi does this:\n");
	printf(atoi("   ---+--+123ab567"));
	printf("\nMy function should do the same:\n");
	ft_atoi("   ---+--+123ab567");
	return (0);
}
