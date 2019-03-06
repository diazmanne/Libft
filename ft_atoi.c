/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emdiaz <emdiaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 15:18:34 by emdiaz            #+#    #+#             */
/*   Updated: 2019/03/05 23:17:33 by emdiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		r;
	int		i;
	int		s;

	r = 0;
	i = 0;
	s = 1;
	if (str[0] == '-')
	{
		s = -1;
		i++;
	}
	while (str[i])
	{
		r = r * 10 + str[i] - '0';
		i++;
	}
	return (r * s);
}
