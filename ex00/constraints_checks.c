/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constraints_checks.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rebrahim <rebrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 16:19:50 by lmackel           #+#    #+#             */
/*   Updated: 2023/10/08 20:49:38 by rebrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "library.h"

/* first while loop checks rows for duplicates in the column grid [j][pos % 4]
second while loop checks cols for duplicates in the column grid [pos / 4][j] */
int	check_dup(int grid[4][4], int pos, int num)
{
	int	j;

	j = -1;
	while (++j < pos / 4)
	{
		if (grid[j][pos % 4] == num)
		{
			return (1);
		}
	}
	j = -1;
	while (++j < pos % 4)
	{
		if (grid[pos / 4][j] == num)
		{
			return (1);
		}
	}
	return (0);
}

/* colup takes up input[1 to 4]
int	y; loop counter
int	max; biggest skyscrapper seen
int	count; number of skyscrapers seen
if(pos / 4 == 3) only runs if the entire column has been filled
if (count != input[pos % 4]) compares the count of skyscrapers
seen with the value of the col_up input array at [pos % 4]*/
int	check_col_up(int grid[4][4], int pos, int input[16])
{
	int	y;
	int	max;
	int	count;

	y = 0;
	max = 0;
	count = 0;
	if (pos / 4 == 3)
	{
		while (y < 4)
		{
			if (grid[y][pos % 4] > max)
			{
				max = grid[y][pos % 4];
				count++;
			}
			y++;
		}
		if (input[pos % 4] != count)
			return (1);
	}
	return (0);
}

/* coldown takes up input[5 to 8]*/
int	check_col_down(int grid[4][4], int pos, int input[16])
{
	int	y;
	int	max;
	int	count;

	y = 3;
	max = 0;
	count = 0;
	if (pos / 4 == 3)
	{
		while (y >= 0)
		{
			if (grid[y][pos % 4] > max)
			{
				max = grid[y][pos % 4];
				count++;
			}
			y--;
		}
		if (input[4 + (pos % 4)] != count)
			return (1);
	}
	return (0);
}

/* row left takes up input[9 to 12] */
int	check_row_left(int grid[4][4], int pos, int input[16])
{
	int	x;
	int	max;
	int	count;

	x = 0;
	max = 0;
	count = 0;
	if (pos % 4 == 3)
	{
		while (x < 4)
		{
			if (grid[pos / 4][x] > max)
			{
				max = grid[pos / 4][x];
				count++;
			}
			x++;
		}
		if (input[(8 + (pos / 4))] != count)
			return (1);
	}
	return (0);
}

/* row right takes up input[13 to 16] */
int	check_row_right(int grid[4][4], int pos, int input[16])
{
	int	x;
	int	max;
	int	count;

	x = 4;
	max = 0;
	count = 0;
	if (pos % 4 == 3)
	{
		while (--x >= 0)
		{
			if (grid[pos / 4][x] > max)
			{
				max = grid[pos / 4][x];
				count++;
			}
		}
		if (input[12 + (pos / 4)] != count)
			return (1);
	}
	return (0);
}
