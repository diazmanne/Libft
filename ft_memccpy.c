/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emdiaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 19:33:47 by emdiaz            #+#    #+#             */
/*   Updated: 2019/02/25 21:32:25 by emdiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	x;
	char			*d;
	char			*s;

	x = (unsigned char)c;
	d = (char *)dst;
	s = (char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		if (s[i] == x)
		{
			s[i + 1] = '\0';
			return (s + i + 1);
		}
		i++;
	}
	s[i] = '\0';
	return (NULL);
}
