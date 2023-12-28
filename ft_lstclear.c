/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atyurina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:43:47 by atyurina          #+#    #+#             */
/*   Updated: 2023/11/15 12:43:52 by atyurina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*                     
#include <stdio.h>
#include <string.h>

void    del(void *content)
{
        free(content);
}

void    ft_lstdelone(t_list *lst, void (*del)(void*))
{
        if (lst == NULL || del == NULL)
                return ;
        del(lst->content);
        free(lst);
}
*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst != NULL)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = temp;
	}
}

/*
int     main(void)
{
        t_list  *node;

        node = malloc(sizeof(t_list));
        node->content = strdup("Hellow, World!");
	node->next = malloc(sizeof(t_list));
        node->next->content = strdup("Mia");
	node->next->next = malloc(sizeof(t_list));
	node->next->next->content = strdup("the cat");
	node->next->next->next = NULL;
        printf("Before: %s \n %s \n %s", (char *)node->content, 
        (char *)node->next->content, (char *)node->next->next->content);
        ft_lstclear(&node, del);
        return (0);
}
*/
