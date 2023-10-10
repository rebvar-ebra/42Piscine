/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmackel <lmackel@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 15:53:14 by lfrolova          #+#    #+#             */
/*   Updated: 2023/10/08 20:30:43 by lmackel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "library.h"

int	solve_puzzle(int grid[4][4], int input[16], int position)
{
	int	height;

	if (position == 16)
		return (0);
	height = 1;
	while (height <= 4)
	{
		if (check_dup(grid, position, height) == 0)
		{
			grid[position / 4][position % 4] = height;
			if (is_valid_move(grid, position, input) == 0)
			{
				if (solve_puzzle(grid, input, position + 1) == 0)
					return (0);
			}
			else
				grid[position / 4][position % 4] = 0;
		}
		height++;
	}
	return (1); 
}
