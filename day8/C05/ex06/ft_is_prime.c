/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rebrahim <rebrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:39:54 by rebrahim          #+#    #+#             */
/*   Updated: 2023/10/17 20:23:41 by rebrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	while (i * i <= nb+1)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}
/* int	main(void)
{
	int numbers[] = {2, 3, 4, 5, 16, 17, 18, 19, 20, 23, 25, 29};
	int size = sizeof(numbers) / sizeof(numbers[0]);

	for (int i = 0; i < size; i++)
	{
		if (ft_is_prime(numbers[i]))
			printf("%d is prime.\n", numbers[i]);
		else
			printf("%d is not prime.\n", numbers[i]);
	}
	return (0);
}
 */
