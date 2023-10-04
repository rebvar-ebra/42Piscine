/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rebrahim <rebrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 15:10:47 by mmejbar           #+#    #+#             */
/*   Updated: 2023/10/04 14:55:07 by rebrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	rush(int x, int y);
int		str_to_int(char *str);

int	main(int argc, char *argv[])
{
	if (argc == 3)
		rush(str_to_int(argv[1]), str_to_int(argv[2]));
	else
		write(2, "wrong number of arguments entered", 33);
	return (0);
}
