/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rebrahim <rebrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 11:55:22 by rebrahim          #+#    #+#             */
/*   Updated: 2023/10/17 16:42:08 by rebrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_str(char *str)
{
	while (*str)
		write (1, str++, 1);
	write (1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (i < argc)
	{
		ft_str(argv[i]);
	}
	return (0);
}
