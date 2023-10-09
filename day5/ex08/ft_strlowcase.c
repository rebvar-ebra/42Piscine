/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rebrahim <rebrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:22:51 by rebrahim          #+#    #+#             */
/*   Updated: 2023/10/09 12:22:34 by rebrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	char	*start;

	start = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str = *str + 32;
		}
		str++;
	}
	return (start);
}

/*
int	main(void)
{
	char test1[] = "HeLLO MaN";
	char test2[] = "Hello World";
	char test3[] = "HELLO";
	char test4[] = "1234abcd";

	printf("Original: '%s', Uppercase: '%s'\n", test1, ft_strlowcase(test1));
	printf("Original: '%s', Uppercase: '%s'\n", test2, ft_strlowcase(test2));
	printf("Original: '%s', Uppercase: '%s'\n", test3, ft_strlowcase(test3));
	printf("Original: '%s', Uppercase: '%s'\n", test4, ft_strlowcase(test4));
}
 */
