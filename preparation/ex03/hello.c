/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hello.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/29 16:13:04 by ydang             #+#    #+#             */
/*   Updated: 2016/07/29 16:13:06 by ydang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(void)
{
	//char	c;
	//int		i;

	//c = "Hello World!";
	//i = 0;
	//while (c[i] != '\0')
	//{
		write(1, "Hello World!", 13);
		//i++;
	//}
	write(1, "\n", 1);
	return (0);
}
