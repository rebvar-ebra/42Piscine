/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rebrahim <rebrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:25:03 by rebrahim          #+#    #+#             */
/*   Updated: 2023/10/04 21:13:55 by rebrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str);

/* int	main(void)
{
	char test1[] = "123456";
	char test2[] = "hello";
	char test3[] = "hello!";
	char test4[] = "";

	printf("Is '%s' numeric? %d\n", test1, ft_str_is_numeric(test1));
	printf("Is '%s' numeric? %d\n", test2, ft_str_is_numeric(test2));
	printf("Is '%s' numeric? %d\n", test3, ft_str_is_numeric(test3));
	printf("Is '%s' numeric? %d\n", test4, ft_str_is_numeric(test4));

	return (0);
}
 */
int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
		{
			return (0);
		}
		str++;
	}
	return (1);
}
