/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/03 20:33:10 by ydang             #+#    #+#             */
/*   Updated: 2016/08/03 20:33:12 by ydang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int	r;
	int	i;

	i = 0;
	r = 0;
	if (argc != 2)
		write(1, "a", 1);
	else
	{
		while (argv[1][i] && r != 1)
		{
			if (argv[1][i] == 'a')
			{
				r = 1;
			}
			i++;
		}
		if (r == 1)
		{
			write(1, "a", 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
