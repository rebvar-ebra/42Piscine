/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rebrahim <rebrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:09:12 by rebrahim          #+#    #+#             */
/*   Updated: 2023/10/04 21:16:28 by rebrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str);

char	*ft_strupcase(char *str)
{
	char	*start;

	*start = str;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 32;
		}
		str++;
	}
	return (start);
}

/* int	main(void)
{
	char test1[] = "hello";
	char test2[] = "Hello World";
	char test3[] = "HELLO";
	char test4[] = "1234abcd";

	printf("Original: '%s', Uppercase: '%s'\n", test1, ft_strupcase(test1));
	printf("Original: '%s', Uppercase: '%s'\n", test2, ft_strupcase(test2));
	printf("Original: '%s', Uppercase: '%s'\n", test3, ft_strupcase(test3));
	printf("Original: '%s', Uppercase: '%s'\n", test4, ft_strupcase(test4));
}
 */
