/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rebrahim <rebrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:28:11 by rebrahim          #+#    #+#             */
/*   Updated: 2023/10/04 21:11:32 by rebrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (*str < 'a' || *str > 'z')
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
	char test2[] = "hello";
	char test3[] = "hello!";
	char test4[] = "";
	printf("Is '%s' lowercase? %d\n", test1, ft_str_is_lowercase(test1));
	printf("Is '%s' lowercase? %d\n", test2, ft_str_is_lowercase(test2));
	printf("Is '%s' lowercase? %d\n", test3, ft_str_is_lowercase(test3));
	printf("Is '%s' lowercase? %d\n", test4, ft_str_is_lowercase(test4));

	return (0);
}*/
