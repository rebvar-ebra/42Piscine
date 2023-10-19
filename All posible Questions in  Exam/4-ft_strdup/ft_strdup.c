/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rebrahim <rebrahim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:18:01 by rebrahim          #+#    #+#             */
/*   Updated: 2023/10/19 16:56:23 by rebrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);

}

char	*ft_strdup(char *src)
{
	char	*new;
	int		i;

	i = 0;
	new = (char *)malloc(sizeof(char) * ft_strlen(src)+1);
	if (!new)
		return (NULL);
	while (*src){
		new[i] = *src++;
		i++;
	}
	new[i+1] ='\0';
	return(new);
}

int main(int argc ,char **argv)
{
	char *mine;
	char *yours;
	if(argc ==2)
	{
		mine = ft_strdup(argv[1]);
		yours = strdup(argv[1]);
		printf(";%s; \n ;%s; \n",mine,yours);

		free(mine);
		free(yours);
			}
	return(0);
}
