/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_validator.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 16:18:36 by spoernba          #+#    #+#             */
/*   Updated: 2026/08/31 18:29:26 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	str_len(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

//map[0] übergeben!!
int	check_first_line(char *line)
{
	int		i;
	int		nbr;
	int		len;
	char	a, b, c;

	len = ft_strlen(line);
	// check if at least 4 chars in input
	if (len < 4)
		return (0);
	a = line[len - 3];
	b = line[len - 2];
	c = line[len - 1];
	// check if last 3 chars are printable chars
	if (a < 32 || a > 126 || b < 32 || b > 126 || c < 32 || c > 126)
		return (0);
	if (a == b || b == c || a == c)
		return (0);
	// if nbr > 9 we need to transform it char by char to int
	i = 0;
	nbr = 0;
	while (i < len - 3)
	{
		if (!(is_digit))
			return (0);
		nbr = nbr * 10 + (line[i] - '0');
		i++;
	}
	// pass nbr to check_map_lines by calling it???
	check_map_lines(nbr);
	return (1);
}

int check_map_lines(int nbr, char **map)
{
	int	i;
	int j;
	int	linelen;

	i = 1;
	//check number of lines equals to input number
	while (map[i])
		i++;
	if (!(i == nbr))
		return (0);
	//check if each len of each line is the same
	while(map[1][j])
		j++;
	linelen = j;
	i = 2;
	while(map[i][j])
	{
		j = 0;
		while(map[i][j])
			j++;
		if (!(j == linelen))
			return (0);
		i++;
	}
}

int	map_validator(char **map)
{
	char *first_line;

	first_line = map[0];
	//calls the above functions
	if (!check_first_line(first_line))
		return (0);
	else
		return (1);
	// but how to get nbr from check first line?
	if (!check_map_lines(nbr, map))
		return (0);
	else
		return (1);
}
