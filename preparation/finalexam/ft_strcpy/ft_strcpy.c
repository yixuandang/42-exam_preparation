/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/02 15:59:11 by ydang             #+#    #+#             */
/*   Updated: 2016/08/02 15:59:13 by ydang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	printf("%s\n", s1);
	return (s1);
}

/*int		main(int argc, char **argv)
{
	int		i;
	char	*str;

	i = 0;
	str = NULL;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	if (argv[1] == '\0')
		return (0);
	ft_strcpy(str, argv[1]);
	write(1, "\n", 1);
	return (0);
	//}
	/*else
	{
		write(1, "\n", 1);
		return (0);
	}
}*/
