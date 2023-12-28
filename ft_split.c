/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atyurina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:40:27 by atyurina          #+#    #+#             */
/*   Updated: 2023/11/08 12:56:37 by atyurina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_w(char const *s, char c)
{
	int	words;
	int	i;

	i = 0;
	words = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			words++;
			i++;
		}
		while (s[i] != c && s[i])
			i++;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		start;
	char	**res;

	i = 0;
	start = 0;
	res = (char **)malloc((ft_count_w(s, c) + 1) * sizeof(char *));
	if (!res)
		return (0);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
		{
			*res++ = ft_substr(s, start, i - start);
			if (!res)
				return (0);
		}
	}
	*res = NULL;
	return (res - ft_count_w(s, c));
}
/*
#include <stdio.h>

int	main(void)
{
	const char	*s;
	char		c;
	int			i;
	char		**p;

	s = "___Hello__world_maaan_!___";
	c = '_';
	i = 0;
	p = ft_split(s, c);
	while (p[i] != NULL)
	{
		printf("%s\n", p[i]);
		i++;
	}
	if  (p[0] == NULL)
		printf("NULL");
}

Parameters s: The string to be split.
c: The delimiter character.
Return value: The array of new strings resulting from the split.
NULL if the allocation fails.
Allocates (with malloc(3)) and returns an array
of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter. The array must end
with a NULL pointer.
*/
