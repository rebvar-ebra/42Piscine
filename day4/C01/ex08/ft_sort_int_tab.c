/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rebrahim <rebrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 17:19:53 by rebrahim          #+#    #+#             */
/*   Updated: 2023/10/02 18:57:00 by rebrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	index;
	int	swap;
	int	temp;

	index = 0;
	while (index < size - 1)
	{
		swap = 0;
		while (swap < size - 1 - index)
		{
			if (tab[swap] > tab[swap + 1])
			{
				temp = tab[swap];
				tab[swap] = tab[swap + 1];
				tab[swap + 1] = temp;
			}
			swap++;
		}
		index++;
	}
}
/* int	main(void)
{
	int arr[] = {5, 3, 8, 2, 1, 6, 7, 4};
	int size = sizeof(arr) / sizeof(arr[0]);

	printf("Before sorting:\n");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	ft_sort_int_tab(arr, size);

	printf("After sorting:\n");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return (0);
}
 */
