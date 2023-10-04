/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rebrahim <rebrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:23:33 by rebrahim          #+#    #+#             */
/*   Updated: 2023/10/04 21:01:56 by rebrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	last;
	int	temp;

	index = 0;
	last = size - 1;
	while (index < last)
	{
		temp = tab[index];
		tab[index] = tab[last];
		tab[last] = temp;
		index++;
		last--;
	}
}
/*int	main(void)
{
	int	numbers[];
	int	size;

	size = sizeof(numbers) / sizeof(numbers[0]);
	numbers = {1, 2, 3, 4, 5};
	ft_rev_in_tab(numbers, size);
	for (int i = 0; i < size; i++)
	{
		printf("%d ", numbers[i]);
	}
	return (0);
}*/
