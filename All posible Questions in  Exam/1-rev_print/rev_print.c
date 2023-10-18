/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rebrahim <rebrahim@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:58:35 by rebrahim          #+#    #+#             */
/*   Updated: 2023/10/18 18:28:11 by rebrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rev_print(char *str)
{
	int i;
	int len;
	char temp;
	len =0;
	i =0;

	while (str[len]!= '\0')
	{
		len++;
	}
	while( i <len /2)
	{
		temp= str[i];
		str[i]=str[len - i -1];
		str[len - i -1] = temp;
		i++;
	}
	return(str);
}
#include <stdio.h>
int main()
{
	char str[] = "dub0 a POIL";
	ft_rev_print(str);
	printf("Reverse string print: %s\n",str);
	return(0);
}
