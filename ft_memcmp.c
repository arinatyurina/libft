/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atyurina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:45:01 by atyurina          #+#    #+#             */
/*   Updated: 2023/11/02 18:55:38 by atyurina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	else
	{	
		while (i < n)
		{
			if (*(unsigned char *)(s1 + i) != *(unsigned char *)(s2 + i))
				return (*(unsigned char *)(s1 + i)
				- *(unsigned char *)(s2 + i));
			i++;
		}
		return (0);
	}
}
/*
int	main(void)
{
	const void	*s1;
	const void	*s2;
	size_t	n;

	s1 = "12339123";
	s2 = "12339123";
	n = 5;
	printf("original function: %d\n", memcmp(s1, s2, n));
	printf("my function: %d", ft_memcmp(s1, s2, n));
}
*/
