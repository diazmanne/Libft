/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emdiaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 17:58:44 by emdiaz            #+#    #+#             */
/*   Updated: 2019/02/27 18:04:50 by emdiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (needle == '\0')
	{
		return ((char *)haystack);
	}
	else if (needle == NULL)
	{
		return (NULL);
	}
	j = 0;
	while (haystack[i] && i < len)
	{
		while (needle[j] == haystack[i] && i < len)
		{
			j++;
		}
		i++;
	}
	return ((char *)haystack + i - 1);
}
