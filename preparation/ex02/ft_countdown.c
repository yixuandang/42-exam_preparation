/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/29 16:04:11 by ydang             #+#    #+#             */
/*   Updated: 2016/07/29 16:04:13 by ydang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(void)
{
	char num;

	num = '9';
	while (num >= '0')
	{
		write(1, &num, 1);
		num--;
	}
	write(1, "\n", 1);
	return (0);
}
