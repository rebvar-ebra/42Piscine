/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rebrahim <rebrahim@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:59:32 by rebrahim          #+#    #+#             */
/*   Updated: 2023/10/19 17:23:30 by rebrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_abs(int x)
{
	if(x <0)
		return(-x);
	return(x);
}
int     *ft_range(int start, int end)
{
	int i;
	int size;

	int *tab;
	int *d;
	size = ft_abs(end-start)+1;
	d =(tab=malloc(size *(sizeof(int)));
	if(!d)
		return(0);
	i =0;
	if(size ==1)
		tab[0]=start;
	if(start <end)
	{
		while(i <size)
		{
			tab[i] = start+i;
			i++;
		}
	}
	else if(start >end)
	{
		while (i <size)
		{
			tab[i]= start -i;
			i++;
		}
	}
	return(tab);


}

