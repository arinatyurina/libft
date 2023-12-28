/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atyurina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:39:29 by atyurina          #+#    #+#             */
/*   Updated: 2023/11/15 13:32:13 by atyurina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
lst: The address of a pointer to the first link of
a list.
new: The address of a pointer to the node to be
added to the list.
Takes as a parameter a node and frees the memory of
the node’s content using the function ’del’ given
as a parameter and free the node. The memory of
’next’ must not be freed
//#include <string.h>
void	del(void *content)
{
	free(content);
}
*/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
}
/*
int	main(void)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	node->content = strdup("Hellow, World!");
	node->next = NULL;
	printf("Before: %s \n", (char *)node->content);
	ft_lstdelone(node, del);
	printf("After: %s", (char*)node->content);
	return (0);
}
*/
