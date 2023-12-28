/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atyurina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:52:52 by atyurina          #+#    #+#             */
/*   Updated: 2023/11/10 14:16:16 by atyurina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
#include <stdio.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	lens;

	i = 0;
	lens = ft_strlen(src);
	if (size == 0)
		return (lens);
	while (src[i] && size - 1 != i)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (lens);
}
/*
int	main(void)
{
	char	dst[50];
	const char	src[] = "Hello!!!!";

	printf("return value: %zu", ft_strlcpy(dst, src, 5));
	return (0);
}
*/
