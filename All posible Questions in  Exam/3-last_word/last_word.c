/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rebrahim <rebrahim@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:24:54 by rebrahim          #+#    #+#             */
/*   Updated: 2023/10/19 13:45:19 by rebrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	is_space(char c)
{

	return(c==' ' || (c >= 9 && c<=13 ));
}

int main(int ac, char **av)
{
	int start;
	int i;
	i = 0;

	if(ac == 2)
	{
		i = 0;
	        while (av[1][i])
        	    i++;
        	i--;
		while((i >=0) && is_space(av[1][i]))
			i--;
		start =i;
		while(start >= 0 && !is_space(av[1][start]))
			start--;
		start++;
		while(start <= i)
		{
			write(1,&av[1][start],1);
			start++;
		}
		
	}

	write(1,"\n",1);
	return(0);
}
