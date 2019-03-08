/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emdiaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/08 02:24:36 by emdiaz            #+#    #+#             */
/*   Updated: 2019/03/08 03:50:23 by emdiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char *new;

	i = 0;
	if (!s || !f)
		return (NULL);
	str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (new)
	{
		while (s[i])
		{
			new[i] = (*f)(i, s[i]);
			i++;
		}
		new[i] = '\0';
		return (new);
	}
	return (NULL);
}
