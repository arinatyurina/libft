/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atyurina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:07:39 by atyurina          #+#    #+#             */
/*   Updated: 2023/11/08 19:09:50 by atyurina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
/*
char	f(unsigned int i, char si)
{
	if (i >= 0)
		si = si + 32;
	return (si);
}
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*res;

	if (!s)
		return (NULL);
	i = 0;
	res = (char *)malloc(((ft_strlen(s)) + 1) * sizeof(char));
	if (!res)
		return (NULL);
	while (s[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
/*
int	main(void)
{
	const char	*s = "HELLO MY FRIEND! 12345";
	char	*result = ft_strmapi(s, f);
	printf("%s", result);
}
*/
