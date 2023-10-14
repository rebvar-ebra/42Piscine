/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rebrahim <rebrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:03:06 by rebrahim          #+#    #+#             */
/*   Updated: 2023/10/12 15:35:52 by rebrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	p;
	int	i;

	p = 1;
	i = 1 ;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i <= power)
	{
		p = p * nb;
		i++;
	}
	return (p);
}
/* int	main(void)
{
	int	nb;
	int	power;

	nb = 2;
	power = -1;
	int result = ft_iterative_power(nb , power);
	printf("ft_iterative_power(%d)(%d) = %d\n" , nb, power, result);
	return (0);

}
 */
