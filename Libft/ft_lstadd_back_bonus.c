/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andloren <andloren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 12:29:40 by andloren          #+#    #+#             */
/*   Updated: 2024/10/02 09:56:02 by andloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	ptr = *lst;
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = new;
}

/* int	main(void)
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;

	node1 = ft_lstnew("Node 1");
	node2 = ft_lstnew("Node 2");
	head = node1;
	ft_lstadd_back(&head, node2);
	printf("First node content: %s\n", (char *)head->content);
	printf("Last node content: %s\n\n\n", (char *)head->next->content);
	return (0);
} */
