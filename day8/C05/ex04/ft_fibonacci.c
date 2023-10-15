/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rebrahim <rebrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:22:14 by rebrahim          #+#    #+#             */
/*   Updated: 2023/10/15 19:16:41 by rebrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	fibo(int n, int a, int b)
{
	if (n == 0)
		return (a);
	if (n == 1)
		return (b);
	return (fibo(n - 1, b, a + b));
}

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	return (fibo(index, 0, 1));
}
/*  int	main(void)
{
	int nb = 2;
	int result = ft_fibonacci(nb);
	printf("ft_fibonacci(%d) = %d\n", nb, result);
	return (0);
}
 */
