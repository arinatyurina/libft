/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atyurina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:17:07 by atyurina          #+#    #+#             */
/*   Updated: 2023/11/03 15:11:48 by atyurina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int			i;
	int			posneg;
	long int	res;

	i = 0;
	posneg = 1;
	res = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			posneg *= (-1);
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		res = res * 10 + nptr[i] - '0';
		i++;
	}
	return (res * posneg);
}
/*
#include <stdio.h>
#include <stdlib.h>

int    main(void)
{
        printf("%i\n", ft_atoi("   -56432"));
        printf("%i", atoi("    -56432"));
        return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_atoi(argv[1]);
		printf("%i\n", ft_atoi(argv[1]));
		printf("%i", atoi(argv[1]));
	}
	return (0);
}
*/
