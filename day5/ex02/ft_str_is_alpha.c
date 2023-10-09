/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rebrahim <rebrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 19:39:35 by rebrahim          #+#    #+#             */
/*   Updated: 2023/10/09 12:15:21 by rebrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/* int main(void)
{
    char *test1 = "Hello";
    char *test2 = "Hello123";
    char *test3 = "123456";
    char *test4 = "HELLO";
    char *test5 = "";

    printf("Test 1 (Expected 1): %d\n", ft_str_is_alpha(test1));
    printf("Test 2 (Expected 0): %d\n", ft_str_is_alpha(test2));
    printf("Test 3 (Expected 0): %d\n", ft_str_is_alpha(test3));
    printf("Test 4 (Expected 1): %d\n", ft_str_is_alpha(test4));
    printf("Test 5 (Expected 1): %d\n", ft_str_is_alpha(test5));
    return 0;
}*/
