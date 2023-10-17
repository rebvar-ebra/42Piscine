/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_move.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmackel <lmackel@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 20:18:09 by lmackel           #+#    #+#             */
/*   Updated: 2023/10/08 19:45:11 by lmackel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "library.h"

int	is_valid_move(int grid[4][4], int pos, int input[16])
{
	if (check_col_up(grid, pos, input) == 1)
		return (1);
	if (check_col_down(grid, pos, input) == 1)
		return (1);
	if (check_row_left(grid, pos, input) == 1)
		return (1);
	if (check_row_right(grid, pos, input) == 1)
		return (1);
	return (0);
}
