/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printabl.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rebrahim <rebrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:39:11 by rebrahim          #+#    #+#             */
/*   Updated: 2023/10/04 21:15:45 by rebrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str < 32 || *str > 127)
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/* int	main(void)
{
	char test1[] = "Hello, World!";
	char test2[] = "Hello\tWorld!";
	char test3[] = "Hello\nWorld!";
	char test4[] = "Hello\x01World!";

	printf("Is '%s' printable? %d\n", test1, ft_str_is_printable(test1));
	printf("Is '%s' printable? %d\n", test2, ft_str_is_printable(test2));
	printf("Is '%s' printable? %d\n", test3, ft_str_is_printable(test3));
	printf("Is '%s' printable? %d\n", test4, ft_str_is_printable(test4));
	return (0);
} */
