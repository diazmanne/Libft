/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emdiaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 01:49:46 by emdiaz            #+#    #+#             */
/*   Updated: 2019/03/03 01:25:06 by emdiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include "libft.h"
#include <stdio.h>
#include <string.h>
size_t		ft_strlcat(char *str, const char *src, int n)
{
    if (n < strlen(str))
        return (n - strlen(src));
    int k = strlen(str);
    if (n >= k)
    {
        int i = 0;
        while (str[i])
            i++;
        int j = 0;
        while (i <= n)
            str[i++] = src[j++];
        str[i] = '\0';
    }
    return (k + strlen(src));
}
int main()
{
    char s1[] = "10000";
    char s2[] = "111";    
    int c = 8;
    printf("%zu", ft_strlcat(s1,s2,c));
    return (0);
}
