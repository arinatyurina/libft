/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atyurina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:05:22 by atyurina          #+#    #+#             */
/*   Updated: 2023/11/13 12:45:37 by atyurina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <limits.h>
#include <stddef.h>
#include <stdint.h>
#include "libft.h"
#include <stdio.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*a;

	if (nmemb && size && (nmemb > (UINT_MAX / size)))
		return (NULL);
	a = (void *)malloc(nmemb * size);
	if (!a)
		return (NULL);
	ft_bzero(a, nmemb * size);
	return (a);
}
/*
int     main(void)
{
        int     *p1;
        int     *p2;
        int     i;
        long int        size;

        size = 21;
        p1 = (int *)calloc(size, sizeof(int));
        p2 = (int *)ft_calloc(size, sizeof(int));

        if (p1 == NULL)
                printf("orig memory not allocated\n");
        else
        {
                printf("orig array:\n");
                for (i = 0; i < size; i++)
                        printf("%d ", p1[i]);
                printf("\n\n");
        }

        if (p2 == NULL)
                printf("mine memory not allocated\n");
        else
        {
                printf("mine array:\n");
                for (i = 0; i < size; i++)
                printf("%d ", p2[i]);
                printf("\n\n");
        }
        free(p1);
        free(p2);
}
*/
