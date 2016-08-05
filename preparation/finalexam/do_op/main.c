/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/03 19:05:56 by ydang             #+#    #+#             */
/*   Updated: 2016/08/03 19:05:59 by ydang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		main(int argc, char **argv)
{
	if (argc != 4)
	{
		printf("\n");
		return (0);
	}
	else if (argv[1][0] == '\0' || argv[2][0] == '\0' || argv[3][0] == '\0')
	{
		printf("\n");
		return (0);
	}
	else if ((argv[2][0] == '/') && (argv[3][0] == '0'))
	{
		printf("\n");
		return (0);
	}
	else if ((argv[2][0] == '%') && (argv[3][0] == '0'))
	{
		printf("\n");
		return (0);
	}
	else
	{
		do_op(argv[1], argv[2], argv[3]);
	}
	return (0);
}
