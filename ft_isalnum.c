/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atyurina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:47:12 by atyurina          #+#    #+#             */
/*   Updated: 2023/10/31 11:51:34 by atyurina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <ctype.h>
*/
int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1024);
	if (c >= '0' && c <= '9')
		return (2048);
	else
		return (0);
}
/*
int	main(void)
{
	printf ("%i\n", ft_isalnum('h'));
	printf("%i", isalnum('t'));
	return (0);
}
*/
