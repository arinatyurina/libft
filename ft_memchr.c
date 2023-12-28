/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atyurina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:08:17 by atyurina          #+#    #+#             */
/*   Updated: 2023/11/13 12:46:19 by atyurina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*p;

	p = (char *)s;
	i = 0;
	while (i < n)
	{
		if (p[i] == c)
			return (p + i);
		i++;
	}
	return (0);
}
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s + i) == (unsigned char)c)
			return ((void *)((char *)s + i));
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const void	*s;
	int	c;
	size_t	n;
	char	*res;

	s = "aadfaabdbk";
	c = 5;
	n = 7;
	res = (char *)ft_memchr(s, c, n);
	ft_memchr(s, c, n);
	if (res != NULL)
        	printf("%s", res);
    	else
    	printf("Character not found\n");
}
*/
