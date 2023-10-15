/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rebrahim <rebrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:53:29 by rebrahim          #+#    #+#             */
/*   Updated: 2023/10/15 19:17:03 by rebrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	return (nb * ft_recursive_factorial(nb -1));
}
/* int	main(void)
{
	int nb = -85;
	int result = ft_recursive_factorial(nb);
	printf("ft_iterative_factorial(%d) = %d\n", nb, result);
	return (0);
} */
