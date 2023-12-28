/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atyurina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 19:37:42 by atyurina          #+#    #+#             */
/*   Updated: 2023/11/13 13:56:01 by atyurina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <string.h>
#include <stdio.h>
#include <bsd/string.h>
//To compile cc -lbsd -Wall -Wextra -Werror ft_strnstr.c
#include <stddef.h>
*/

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;

	if (!*little)
		return ((char *)big);
	little_len = ft_strlen(little);
	while (*big && len >= little_len)
	{
		if (!ft_strncmp(big, little, little_len))
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}
/*
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	t;

	i = 0;
	j = 0;
	if (little[0] == '\0' || little == NULL)
		return ((char *)big);
	while ((i < len) && big[i])
	{
		t = i;
		if ((i < len) && (big[i] == little[j]) && big[i])
		{
			while ((i < len) && (big[i] == little[j]) && big[i] && little[j])
			{
				i++;
				j++;
			}
			if (little[j] == '\0')
				return ((char *)&big[i - j]);
			j = 0;
			i--;
		}
		i = t + 1;
	}
	return (NULL);
}

int	main(void)
{
	size_t	len;
	char big[30] = "aaabcabcd";
	char little[10] = "aabc";
	len = 432957839;
	printf("my function: %s\n", ft_strnstr(big, little, len));
	printf("or function: %s", strnstr(big, little, len)); 
}
*/
