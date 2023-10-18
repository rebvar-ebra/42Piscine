/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rebrahim <rebrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:54:18 by rebrahim          #+#    #+#             */
/*   Updated: 2023/10/18 12:18:08 by rebrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc , char **argv)
{
	(void) argc;
	(void) argv;

	char	i;

	i = '9';

	while (i >= '0')
	{
		write (1, &i, 1);
		i--;
	}
	write (1, "\n", 1);
	return (0);
}
