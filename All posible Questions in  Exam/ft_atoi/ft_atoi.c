/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rebrahim <rebrahim@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:35:07 by rebrahim          #+#    #+#             */
/*   Updated: 2023/10/18 16:05:09 by rebrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	 is_space (char c)
{
	while (c == '\t'||c == '\n'||c == '\v'||c == '\f' || c =='\r' || c == ' ')
		return (1);
	return(0);
}

int ft_atoi(const char *str)
{
	int i;
	int rs;

	i =0;
	rs =0;
	while (is_space(str[i]))
	{
		str++;
	}
	while (str[i] == '+'|| str[i] == '-')
	{
		if(str[i]== '-')
			return(0);
		i++;
	}
	while(str[i])
	{
		if(str[i] >='0' && str[i]  <= '9')
		{
			rs = rs * 10 + str[i] - '0';
		}
		i++;
	}	
	return(rs);
}

#include <stdio.h>

int main(void)
{
    const char *test_str1 = "   +123";
    const char *test_str2 = "   -456";
    const char *test_str3 = "789";

    printf("%s -> %d\n", test_str1, ft_atoi(test_str1));
    printf("%s -> %d\n", test_str2, ft_atoi(test_str2));
    printf("%s -> %d\n", test_str3, ft_atoi(test_str3));

    return 0;
}

