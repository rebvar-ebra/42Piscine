/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rebrahim <rebrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 17:33:29 by rebrahim          #+#    #+#             */
/*   Updated: 2023/10/17 10:26:03 by rebrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s, char *b)
{
	while (*s && *s == *b)
	{
		s++;
		b++;
	}
	return (*s - *b);
}

void	ft_sort(char **tab, int size)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	while (i < size)
	{
		j = i;
		while (j > 0 && ft_strcmp(tab[j - 1], tab[j]) > 0)
		{
			temp = tab[j - 1];
			tab[j - 1] = tab[j];
			tab[j] = temp;
			j--;
		}
		i++;
	}
}

void	ft_str(char *str)
{
	while (*str)
		write (1, str++, 1);
	write (1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	if (i < argc)
	{
		ft_sort(argv + 1, argc - 1);
		while (i < argc)
		{
			ft_str(argv[i]);
			i++;
		}
	}
	return (0);
}
