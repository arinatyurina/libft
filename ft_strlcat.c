/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atyurina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:03:39 by atyurina          #+#    #+#             */
/*   Updated: 2023/11/15 14:16:08 by atyurina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
*/
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	j = 0;
	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen((char *)src);
	if (dst_len >= size)
		return (size + src_len);
	while (dst[i])
		i++;
	if (dst_len < size)
	{
		while (j < size - i - 1 && src[j])
		{
			dst[i + j] = src[j];
			j++;
		}
		dst[i + j] = '\0';
	}
	return (dst_len + src_len);
}
/*
#include <stdio.h>
#include <bsd/string.h>

int     main()
{
        const char      s1[] = {" School 42!"};
        char            d1[20] = {"Hello"};
        const char      s2[] = {" School 42!"};
        char            d2[20] = {"Hello"};

        size_t res1;
        size_t res2;
        size_t buff;

        buff = 10;

        printf("orig before: dest:%s   src:%s\n", d1, s1);
        res1 = strlcat(d1, s1, buff);
        printf("orig after: dest:%s   src:%s   res:%zu\n\n", d1, s1, res1);
        printf("mine before: dest:%s   src:%s\n", d2, s2);
        res2 = ft_strlcat(d2, s2, buff);
        printf("mine after: dest:%s   src:%s   res:%zu\n", d2, s2, res2);
}
*/
