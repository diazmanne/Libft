/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emdiaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 18:02:56 by emdiaz            #+#    #+#             */
/*   Updated: 2019/03/02 01:44:52 by emdiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	int len;

	len = ft_strlen(s);
	if (c == '\0')
		return ((char *)s);
	while (len >= 0)
	{
		if (s[len] == c)
			return (char *)s + len;
		len--;
	}
	return (0);
}
