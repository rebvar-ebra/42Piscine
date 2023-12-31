/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rebrahim <rebrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:58:11 by rebrahim          #+#    #+#             */
/*   Updated: 2023/10/09 12:53:02 by rebrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	is_alpha(char c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

int	is_numeric(char str)
{
	return ((str >= '0' || str <= '9'));
}

char	adjust_case(char c, int in_word)
{
	if (!in_word && c >= 'a')
		c -= 32;
	else if (in_word && c <= 'Z')
		c += 32;
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	index;
	int	is_start_of_word;

	index = 0;
	is_start_of_word = 0;
	while (str[index])
	{
		if (is_alpha(str[index]))
		{
			str[index] = adjust_case(str[index], is_start_of_word);
			is_start_of_word = 1;
		}
		else if (is_numeric(str[index]))
		{
			is_start_of_word = 0;
		}
		index++;
	}
	return (str);
}
