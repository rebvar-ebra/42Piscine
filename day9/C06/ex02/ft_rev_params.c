/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rebrahim <rebrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 14:25:04 by rebrahim          #+#    #+#             */
/*   Updated: 2023/10/16 20:44:51 by rebrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_str(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	while (--argc)
		ft_str(argv[argc]);
	return (0);
}
