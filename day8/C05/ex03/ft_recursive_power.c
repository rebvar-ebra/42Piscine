/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rebrahim <rebrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:39:52 by rebrahim          #+#    #+#             */
/*   Updated: 2023/10/12 16:43:50 by rebrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power -1));
}
/* int	main(void)
{
	int	nb;
	int	power;

	nb = 3;
	power = 3;
	int result = ft_recursive_power(nb , power);
	printf("ft_iterative_power(%d)(%d) = %d\n" , nb, power, result);
	return (0);

}
 */
