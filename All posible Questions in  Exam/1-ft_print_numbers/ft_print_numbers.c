/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rebrahim <rebrahim@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:20:07 by rebrahim          #+#    #+#             */
/*   Updated: 2023/10/18 12:24:12 by rebrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char digit;

	digit ='0';

	while (digit <= '9')
	{
		write (1 ,&digit ,1);
		digit++;
	}
}

int main(void)
{
	ft_print_numbers();
	write(1, "\n" ,1);
	return (0);
}
