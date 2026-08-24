/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 13:22:04 by spoernba          #+#    #+#             */
/*   Updated: 2026/08/24 13:24:08 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//include <stdio.h>

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
		c++;
	return (c);
}

/*
int     main(void)
{
        char    *str = "string";

        printf("%d", ft_strlen(str));
        return(0);
}
*/
