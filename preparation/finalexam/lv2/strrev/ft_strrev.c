/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/04 23:38:54 by ydang             #+#    #+#             */
/*   Updated: 2016/08/04 23:38:55 by ydang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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
	int i;

	i = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	else
	{
		printf("%s\n", ft_strrev(argv[1]));
	}
	return (0);
}
