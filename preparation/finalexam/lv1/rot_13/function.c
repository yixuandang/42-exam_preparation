/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/04 19:20:45 by ydang             #+#    #+#             */
/*   Updated: 2016/08/04 19:20:47 by ydang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rot_13.h"

void	a_m(int i, char **argv)
{
	argv[1][i] = argv[1][i] + 13;
	write(1, &argv[1][i], 1);
}

void	n_z(int i, char **argv)
{
	argv[1][i] = argv[1][i] - 13;
	write(1, &argv[1][i], 1);
}

void	a_m_upper(int i, char **argv)
{
	argv[1][i] = argv[1][i] + 13;
	write(1, &argv[1][i], 1);
}

void	n_z_upper(int i, char **argv)
{
	argv[1][i] = argv[1][i] - 13;
	write(1, &argv[1][i], 1);
}

void	rot_13(int i, char **argv)
{
	if (argv[1][i] >= 'a' && argv[1][i] <= 'm')
	{
		a_m(i, argv);
	}
	else if (argv[1][i] >= 'n' && argv[1][i] <= 'z')
	{
		n_z(i, argv);
	}
	else if (argv[1][i] >= 'A' && argv[1][i] <= 'M')
	{
		a_m_upper(i, argv);
	}
	else if (argv[1][i] >= 'N' && argv[1][i] <= 'Z')
	{
		n_z_upper(i, argv);
	}
	else
	{
		write(1, &argv[1][i], 1);
	}
}
