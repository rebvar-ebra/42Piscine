/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rebrahim <rebrahim@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:40:11 by rebrahim          #+#    #+#             */
/*   Updated: 2023/10/19 13:22:42 by rebrahim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
char get_letter(char c)
{
	char j;

	j = c;
	if (j == 'z')
		(j='m');
	
	else if(j == 'Z')
		j = 'M';
	
	else if((j >= 'a' && j<= 'm')|| (j >='A' && j<='M'))
			j+=13;
	
	else if((j >='n' && j <= 'z') || (j >='n' && j <= 'z'))
			j-=13;
	else
		return(c);
	return(j);

}

int main(int argc,char **argv)
{
	char c;
	if(argc ==2)
	{
		while(*argv[1])
		{
			c = get_letter(*argv[1]);
			write(1,&c,1);
			argv[1]++;
		}
	}
	write(1,"\n",1);
	return(0);
}
