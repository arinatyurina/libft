/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atyurina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:57:39 by atyurina          #+#    #+#             */
/*   Updated: 2023/11/03 15:12:47 by atyurina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = (unsigned char *)s;
	while (n > 0)
	{
		p[i] = (unsigned char)c;
		i++;
		n--;
	}
	return (p);
}
/*
int	main(void)
{
	char	str[50];

	strcpy(str, "My number is changing");
	printf("%s\n", str);
	ft_memset(str, 'a', 9);
	printf("%s", str);
	return (0);
}
*/
