/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/03 00:41:46 by ydang             #+#    #+#             */
/*   Updated: 2016/08/03 00:41:47 by ydang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int oct;
	int	divv;

	divv = 128;
	oct = octet - '0';
	while (divv != 0)
	{
		if (divv <= oct)
		{
			write(1, "1", 1);
			oct = oct % divv;
		}
		else
		{
			write(1, "0", 1);
		}
		divv = divv / 2;
	}
}

int		main(void)
{
	char a;

	a = 'c';
	print_bits(a);
	return (0);
}
