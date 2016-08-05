/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 00:34:49 by ydang             #+#    #+#             */
/*   Updated: 2016/08/05 00:34:52 by ydang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strrev(char *str)
{
	int		i;
	int		count;
	char	tmp;

	i = 0;
	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	if (str)
	{
		while (i < count / 2)
		{
			tmp = str[i];
			str[i] = str[count - i - 1];
			str[count - i - 1] = tmp;
			i++;
		}
	}
	return (str);
}

int		main(int argc, char **argv)
{
	char	*new;
	int		i;
	int		count;
	int		count2;

	i = 0;
	count = 0;
	count2 = 0;
	new = NULL;
	if (argc != 2)
	{
		write(1, "\n", 1);
	}
	else
	{
		new = ft_strrev(argv[1]);
		while (new[i] < 33 && new[i])
		{
			i++;
			count++;
		}
		while (new[i] >= 33 && new[i])
		{
			i++;
		}
		while (i > count)
		{
			write(1, &new[i - 1], 1);
			i--;
		}
		write(1, "\n", 1);
	}
	return (0);
}
