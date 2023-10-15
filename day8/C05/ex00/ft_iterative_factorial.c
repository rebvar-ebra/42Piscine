/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rebrahim <rebrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:14:50 by rebrahim          #+#    #+#             */
/*   Updated: 2023/10/15 19:17:17 by rebrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	f;

	i = 1;
	f = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		f = f * i;
		i++;
	}
	return (f);
}
/* int	main(void)
{
	int nb = 0;
	int result = ft_iterative_factorial(nb);
	printf("ft_iterative_factorial(%d) = %d\n", nb, result);
	return (0);
} */
