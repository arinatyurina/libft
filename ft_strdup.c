/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atyurina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:57:25 by atyurina          #+#    #+#             */
/*   Updated: 2023/11/13 13:21:21 by atyurina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(s);
	dup = malloc((len + 1) * sizeof(char));
	if (dup == 0)
		return (0);
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

/*
int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_strdup(argv[1]);
	printf("My function : %s", ft_strdup(argv[1]);
	printf ("Original function : %s", strdup(argv[1]));
	return (0);
}
*/
