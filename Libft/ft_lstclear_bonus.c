/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andloren <andloren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 12:30:18 by andloren          #+#    #+#             */
/*   Updated: 2024/10/02 11:31:47 by andloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*curr;
	t_list	*next;

	if (!lst || !del)
		return ;
	curr = *lst;
	while (curr)
	{
		next = curr->next;
		ft_lstdelone(curr, del);
		curr = next;
	}
	*lst = NULL;
}

/* void	free_content(void *content)
{
	free(content);
} */

/* int	main(void)
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;

	head = NULL;
	node1 = ft_lstnew(malloc(10));
	node2 = ft_lstnew(malloc(10));
	if (!node1 || !node2)
	{
		free(node1);
		free(node2);
		return (1);
	}
	ft_strlcpy(node1->content, "Node 1", 10);
	ft_strlcpy(node2->content, "Node 2", 10);
	head = node1;
	node1->next = node2;
	ft_lstclear(&head, free_content);
	if (head == NULL)
		printf("List cleared successfully.\n\n\n");
	else
		printf("List not cleared.\n\n\n");
	return (0);
} */
