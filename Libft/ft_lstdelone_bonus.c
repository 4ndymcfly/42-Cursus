/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andloren <andloren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 12:29:58 by andloren          #+#    #+#             */
/*   Updated: 2024/10/02 11:10:06 by andloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/* void	del(void *content)
{
	free(content);
} */

/* int	main(void)
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;
	t_list	*temp;

	node1 = ft_lstnew(strdup("Node 1"));
	node2 = ft_lstnew(strdup("Node 2"));
	head = node1;
	head->next = node2;
	printf("First node content: %s\n", (char *)head->content);
	printf("Second node content: %s\n", (char *)head->next->content);
	// Save the next node before deleting the current head
	temp = head->next;
	ft_lstdelone(head, del); // Delete the first node
	head = temp;             // Update head to point to the next node
	printf("\nAfter deletion:\n");
	if (head)
		printf("Remaining node content: %s\n\n\n", (char *)head->content);
	else
		printf("No nodes remaining.\n\n\n");
	// Clean up the remaining node
	ft_lstdelone(head, del);
	return (0);
} */
