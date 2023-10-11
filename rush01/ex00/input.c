/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rebrahim <rebrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 14:48:23 by lfrolova          #+#    #+#             */
/*   Updated: 2023/10/11 20:22:25 by rebrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	arg_check(int argc, char **argv)
{
	if (argc != 2)
	{
		return (1);
	}
	if (ft_strlen(argv[1]) != 31)
	{
		return (1);
	}
	return (0);
}

int	*transform_input(char *str)
{
	int	i;
	int	j;
	int	*input_array;

	i = 0;
	j = 0;
	input_array = malloc(16 * sizeof(int));
	while (input_array == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			input_array[j] = ft_simple_atoi(str + i);
			j++;
		}
		i++;
	}
	return (input_array);
}
