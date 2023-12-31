/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rebrahim <rebrahim@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:30:23 by rebrahim          #+#    #+#             */
/*   Updated: 2023/10/19 12:06:32 by rebrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int is_space(char c)
{
    return (c == ' ' || (c >= 9 && c <= 13));
}
int	main(int argc, char *argv[])
{
	int i;
	
	i = 0;
	if(argc ==2)
	{
		while(is_space(argv[1][i]))
			i++;
		while(!is_space(argv[1][i]) && argv[1][i] !='\0')
		{
			write(1,&argv[1][i],1);
			i++;
		}
	}
	write(1,"\n",1);
	return(0);
}

