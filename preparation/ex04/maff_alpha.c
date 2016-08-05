/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/29 16:25:29 by ydang             #+#    #+#             */
/*   Updated: 2016/07/29 16:25:31 by ydang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(void)
{
	char	lower;
	char	upper;
	int		i;

	lower = 'a';
	upper = 'B';
	i = 0;
	while (i <= 12)
	{
		write(1, &lower, 1);
		write(1, &upper, 1);
		lower = lower + 2;
		upper = upper + 2;
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
