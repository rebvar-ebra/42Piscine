/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rebrahim <rebrahim@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:59:15 by rebrahim          #+#    #+#             */
/*   Updated: 2023/10/18 15:23:24 by rebrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 char	*ft_strrev(char *str)
{
	int i;
	int len;
	char temp;
	
	len=0;
	i =0;
	while (str[len] !='\0')
	{
		len++;
	}
	while(i < len /2)
	{
		temp = str[i];
		str[i] = str[len - i - 1];
		str[len -i - 1] = temp;
		i++;
	}
	return(str);

}
#include <stdio.h>
int main(void)
{
	char a[] ="abc";
	char *res;

	res =ft_strrev(a);
	printf("Original text %s\nReverse text %s", a ,res);
	return (0);
}
