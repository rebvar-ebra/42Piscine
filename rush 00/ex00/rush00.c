/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rebrahim <rebrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 09:43:27 by rebrahimy         #+#    #+#             */
/*   Updated: 2023/10/04 14:53:53 by rebrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	str_to_int(char *str)
{
	int		result;
	int		i;

	result = 0;
	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result);
}

void	print_chars(int x, char start, char middle, char ending)
{
	int	column;

	column = 1;
	while (column <= x)
	{
		if (column == 1)
			ft_putchar(start);
		else if (column == x)
			ft_putchar(ending);
		else
			ft_putchar(middle);
		column++;
	}
}

void	rush(int x, int y)
{
	int	row;

	row = 1;
	if (x == 0 || y == 0)
	{
		write(2, "invalid value entered (negative, null, or non-numeric)", 54);
	}
	else
	{
		while (row <= y)
		{
			if (row == 1)
				print_chars(x, 'o', '-', 'o');
			else if (row == y)
				print_chars(x, 'o', '-', 'o');
			else
				print_chars(x, '|', ' ', '|');
			ft_putchar('\n');  
			row++;
		}
	}
}
