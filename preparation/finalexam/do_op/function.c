/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/03 19:32:06 by ydang             #+#    #+#             */
/*   Updated: 2016/08/03 19:32:07 by ydang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		my_div(int a, int b)
{
	int	r;

	r = 0;
	if (b != 0)
	{
		r = a / b;
	}
	else
	{
		printf("\n");
	}
	return (r);
}

int		my_mod(int a, int b)
{
	int r;

	r = 0;
	if (b != 0)
	{
		r = a % b;
	}
	else
	{
		printf("\n");
	}
	return (r);
}

int		my_add(int a, int b)
{
	int r;

	r = 0;
	r = a + b;
	return (r);
}

int		my_sub(int a, int b)
{
	int r;

	r = 0;
	r = a - b;
	return (r);
}

int		my_mul(int a, int b)
{
	int r;

	r = 0;
	r = a * b;
	return (r);
}
