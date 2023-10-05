/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rebrahim <rebrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:30:56 by rebrahim          #+#    #+#             */
/*   Updated: 2023/10/04 21:14:32 by rebrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (*str < 'A' || *str > 'Z')
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	char test1[] = "HELLO";
	char test2[] = "Hello";
	char test3[] = "HELLO!";
	char test4[] = "";

    printf("Is '%s' uppercase? %d\n", test1, ft_str_is_uppercase(test1));
    printf("Is '%s' uppercase? %d\n", test2, ft_str_is_uppercase(test2));
    printf("Is '%s' uppercase? %d\n", test3, ft_str_is_uppercase(test3));
    printf("Is '%s' uppercase? %d\n", test4, ft_str_is_uppercase(test4));

	return (0);
} */
