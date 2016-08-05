/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/03 21:05:22 by ydang             #+#    #+#             */
/*   Updated: 2016/08/03 21:05:23 by ydang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int		size;
	char	*str;

	size = 0;
	str = argv[1];
	if (argc <= 1)
	{
		write(1, "\n", 1);
	}
	else
	{
		while (str[size] != '\0')
		{
			size++;
		}
		write(1, str, size);
		write(1, "\n", 1);
	}
	return (0);
}
