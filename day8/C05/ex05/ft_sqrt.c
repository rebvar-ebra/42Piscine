/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rebrahim <rebrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:28:48 by rebrahim          #+#    #+#             */
/*   Updated: 2023/10/12 17:38:28 by rebrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <math.h>

int	ft_sqrt(int nb)
{
	int	i;
	int	j;

	i = nb;
	j = (nb / 2) + 1;
	if (nb < 0)
		return (-1);
	if (nb == 0 || nb == 1)
		return (nb);
	while (i > j)
	{
		i = j;
		j = ((nb / i + i) / 2);
	}
	return (i);
}
/* int	main(void)
{
	int nb = 16;
	int result = ft_sqrt(nb);
	float off = sqrt(nb);
	printf("ft_sqrt(%d) = %d\n", nb, result);
	printf("sqrt(%d) = %f\n", nb, off);

	return (0);
}
 */
