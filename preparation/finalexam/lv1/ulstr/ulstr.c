/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/04 19:39:14 by ydang             #+#    #+#             */
/*   Updated: 2016/08/04 19:39:15 by ydang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ulstr(int i, char **argv)
{
	if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
	{
		argv[1][i] = argv[1][i] - 32;
		write(1, &argv[1][i], 1);
	}
	else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
	{
		argv[1][i] = argv[1][i] + 32;
		write(1, &argv[1][i], 1);
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
			ulstr(i, argv);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
