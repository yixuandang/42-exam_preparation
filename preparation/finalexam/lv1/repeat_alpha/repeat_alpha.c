/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/04 03:05:16 by ydang             #+#    #+#             */
/*   Updated: 2016/08/04 03:05:17 by ydang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	lowercase(int i, char **argv)
{
	int j;
	int x;

	j = 0;
	x = (argv[1][i] - 97);
	while (j < x)
	{
		write(1, &argv[1][i], 1);
		j++;
	}
	write(1, &argv[1][i], 1);
}

void	uppercase(int i, char **argv)
{
	int j;
	int x;

	j = 0;
	x = (argv[1][i] - 65);
	while (j < x)
	{
		write(1, &argv[1][i], 1);
		j++;
	}
	write(1, &argv[1][i], 1);
}

void	repeat_alpha(char **argv)
{
	int	i;

	i = 0;
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] >= 97 && argv[1][i] <= 122)
		{
			lowercase(i, argv);
		}
		else if (argv[1][i] >= 65 && argv[1][i] <= 90)
		{
			uppercase(i, argv);
		}
		else
		{
			write(1, &argv[1][i], 1);
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	else
	{
		repeat_alpha(argv);
	}
	write(1, "\n", 1);
	return (0);
}
