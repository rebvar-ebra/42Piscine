/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rebrahim <rebrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:57:49 by rebrahim          #+#    #+#             */
/*   Updated: 2023/10/18 13:59:33 by rebrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i]-s2[i]);
}
#include <stdio.h>
int main(void)
{
	char a[] ="3";
	char b[] ="4";
	int res;

	res = ft_strcmp(a,b);
	printf("Result :[%d] ", res);

}
