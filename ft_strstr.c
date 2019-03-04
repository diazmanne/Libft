/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emdiaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 20:05:20 by emdiaz            #+#    #+#             */
/*   Updated: 2019/02/26 00:59:15 by emdiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;

	i = 0;
	if (!ft_strcmp(needle, " "))
	{
		return ((char *)haystack);
	}
	while (haystack[i])
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while (haystack[i] && needle[j])
			{
				i++;
				j++;
			}
			if (!needle[j])
				return ((char *)haystack + i - j);
		}
		i++;
	}
	return (NULL);
}
