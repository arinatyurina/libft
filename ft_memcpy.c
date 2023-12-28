/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atyurina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:04:17 by atyurina          #+#    #+#             */
/*   Updated: 2023/11/04 16:02:07 by atyurina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(char *)(dest + i) = *(char *)(src + i);
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	destination1[20] = "11111 butterflies";
	const char	*source1 = "00000 cats";
	char	destination2[20] = "11111 butterflies";
	const char	*source2 = "00000 cats";
	
	printf("my function: %s\n", destination1);
	ft_memcpy(destination1, source1, 5);
	printf("%s\n", destination1);
	printf("original function: %s\n", destination2);
	memcpy(destination2, source2, 5);
	printf("%s", destination2);
	return 0;
}
*/
