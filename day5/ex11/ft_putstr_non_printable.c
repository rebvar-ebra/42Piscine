/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rebrahim <rebrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:38:20 by rebrahim          #+#    #+#             */
/*   Updated: 2023/10/09 15:25:28 by rebrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str);

char	hex(int n)
{
	if (n < 10)
		return (n + 48);
	else
		return (n + 87);
}

void	ft_putstr_non_printable(char *str)
{
	char	divi;
	char	mod;

	while (*str)
	{
		if (*str >= 32 && *str <= 126)
		{
			write(1, str, 1);
		}
		else
		{
			write(1, "\\", 1);
			divi = hex((unsigned char)*str / 16);
			mod = hex((unsigned char)*str % 16);
			write(1, &divi, 1);
			write(1, &mod, 1);
		}
		str++;
	}
}
 int	main(void)
{
	char test[] = "Coucou\ntu vas bien ?";
	//char test[] ="\\";
	ft_putstr_non_printable(test);
	return (0);
}

 
