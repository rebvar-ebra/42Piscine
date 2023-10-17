/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rebrahim <rebrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:29:05 by rebrahim          #+#    #+#             */
/*   Updated: 2023/10/17 10:23:48 by rebrahim         ###   ########.fr       */
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

	i = 1;
	while (i < argc)
	{
		ft_str(argv[i]);
		i++;
	}
	return (0);
}
