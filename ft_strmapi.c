/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emdiaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/08 02:24:36 by emdiaz            #+#    #+#             */
/*   Updated: 2019/03/08 21:38:58 by emdiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	l;
	size_t	i;
	char	*s2;
	char	r;

	s2 = ft_strdup(s);
	if (s2 == NULL)
		return (s2);
	l = ft_strlen(s2);
	i = 0;
	while (i < l)
	{
		r = f((unsigned int)i, s2[i]);
		s2[i] = r;
		i++;
	}
	return (s2);
}
