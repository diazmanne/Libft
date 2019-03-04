/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emdiaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 19:17:54 by emdiaz            #+#    #+#             */
/*   Updated: 2019/02/26 21:41:34 by emdiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//#include "strnstr.c"
#include <string.h>
int main(int argc, char **argv)
{
	argc = 3;

	char *y;

	y = strnstr(argv[1], argv[2], 5);
	printf("%s", y);
	return (0);
}
