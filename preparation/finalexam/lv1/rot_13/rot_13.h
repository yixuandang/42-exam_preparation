/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/04 19:21:54 by ydang             #+#    #+#             */
/*   Updated: 2016/08/04 19:21:56 by ydang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROT_13_H
# define ROT_13_H

# include <unistd.h>

void	a_m(int i, char **argv);
void	n_z(int i, char **argv);
void	a_m_upper(int i, char **argv);
void	n_z_upper(int i, char **argv);
void	rot_13(int i, char **argv);

#endif
