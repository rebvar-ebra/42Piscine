/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   library.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrolova <lfrolova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 13:28:59 by lfrolova          #+#    #+#             */
/*   Updated: 2023/10/08 14:55:02 by lfrolova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBRARY_H
# define LIBRARY_H

int		check_col_up(int grid[4][4], int pos, int input[16]);
int		check_col_down(int grid[4][4], int pos, int input[16]);
int		check_row_left(int grid[4][4], int pos, int input[16]);
int		check_row_right(int grid[4][4], int pos, int input[16]);
int		check_dup(int grid[4][4], int pos, int num);
int		is_valid_move(int grid[4][4], int pos, int input[16]);
int		ft_strlen(char *str);
int		solve_puzzle(int grid[4][4], int input[16], int position);
int		*transform_input(char *str);
int		arg_check(int argc, char **argv);
int		ft_simple_atoi(char *str);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int n);
#endif
