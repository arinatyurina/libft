/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atyurina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:02:56 by atyurina          #+#    #+#             */
/*   Updated: 2023/11/04 19:20:41 by atyurina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		beg;
	int		end;
	char	*res;
	int		i;
	int		len;

	beg = 0;
	i = 0;
	end = ft_strlen(s1);
	while (s1[beg] && ft_strchr(set, s1[beg]) != 0)
		beg++;
	while (end > beg && ft_strchr(set, s1[end - 1]) != 0)
		end--;
	len = end - beg;
	res = (char *)malloc((len + 1) * sizeof(char));
	if (!res)
		return (0);
	while (i < len)
	{
		res[i] = s1[beg + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
/*
#include <stdio.h>

int	main(void)
{
	const char	*s1 = "_ooe_Helloeoo_e";
	const char	*set = "_oe";

	printf("%s", ft_strtrim(s1, set));
}
*/
