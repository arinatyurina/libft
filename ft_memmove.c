/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atyurina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:56:25 by atyurina          #+#    #+#             */
/*   Updated: 2023/11/02 16:07:16 by atyurina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest < src)
	{
		while (i < n)
		{
			*(char *)(dest + i) = *(char *)(src + i);
			i++;
		}
	}
	if (dest >= src)
	{
		i = n - 1;
		while (i < n)
		{
			*(char *)(dest + i) = *(char *)(src + i);
			i--;
		}
	}
	return (dest);
}
/*
int	main(void)
{
	char	destination1[] = "11111";
	const	char	source1[] = "00000";
	char	destination2[] = "11111";
	const char	source2[] = "00000";
	
	printf("original function: %s\n", destination2);
	memmove(destination2, source2, 3);
	printf("%s\n", destination2);
	printf("my function: %s\n", destination1);
	ft_memmove(destination1, source1, 3);
	printf("%s\n", destination1);
}
*/
