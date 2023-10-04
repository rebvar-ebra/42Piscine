/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rebrahim <rebrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 15:57:47 by rebrahim          #+#    #+#             */
/*   Updated: 2023/10/04 21:02:13 by rebrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}

/* int	main()
{
	char testString1[] = "OpenAI";
	char testString2[] = "";

	printf("Length of \"%s\": %d\n", testString1, ft_strlen(testString1));
	printf("Length of \"%s\": %d\n", testString2, ft_strlen(testString2));

	return (0);
}
 */
