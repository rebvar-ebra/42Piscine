/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmackel <lmackel@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 15:32:35 by lfrolova          #+#    #+#             */
/*   Updated: 2023/10/08 20:29:50 by lmackel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "library.h"

void	print_solution(int grid[4][4])
{
	int	i;
	int	j;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			ft_putnbr(grid[i][j]);
			ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}

void	*my_memset(void *s, int c, int len)
{
	unsigned char	*dst;

	dst = s;
	while (len > 0)
	{
		*dst = (unsigned char) c;
		dst++;
		len--;
	}
	return (s);
}

int	main(int argc, char **argv)
{
	int	*input;
	int	grid[4][4];

	my_memset(grid, 0, sizeof(grid));
	if (arg_check(argc, argv) != 0)
	{
		ft_putstr("Error\n");
		return (1);
	}
	input = transform_input(argv[1]);
	if (solve_puzzle(grid, input, 0) == 0)
		print_solution(grid);
	else
		ft_putstr("Error\n");
	return (0);
}
