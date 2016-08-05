/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/04 22:45:53 by ydang             #+#    #+#             */
/*   Updated: 2016/08/04 22:45:55 by ydang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(const char *str)
{
	int	i;
	int	nbr;
	int	negative;

	i = 0;
	nbr = 0;
	negative = 0;
	while (str[i] && str[i] < 33)
		i++;
	if (str[i] == '-')
		negative = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while ((str[i]) && (str[i] >= '0') && (str[i] <= '9'))
	{
		nbr *= 10;
		nbr += str[i] - '0';
		i++;
	}
	if (negative == 1)
		return (-nbr);
	else
		return (nbr);
}

int		main(void)
{
	printf("%d\n", ft_atoi("1239877699999"));
	printf("%d\n", atoi("1239877699999"));
	return (0);
}
