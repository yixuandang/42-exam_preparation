/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/04 20:58:11 by ydang             #+#    #+#             */
/*   Updated: 2016/08/04 20:58:12 by ydang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	alpha_mirror(int i, char **argv)
{
	char x;

	if ((argv[1][i] >= 'a') && (argv[1][i] <= 'z'))
	{
		x = 'm' - (argv[1][i] - 'n');
		write(1, &x, 1);
	}
	else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
	{
		x = 'M' - (argv[1][i] - 'N');
		write(1, &x, 1);
	}
	else
	{
		write(1, &argv[1][i], 1);
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	else
	{
		while (argv[1][i] != '\0')
		{
			alpha_mirror(i, argv);./	
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
