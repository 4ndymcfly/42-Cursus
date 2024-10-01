/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andloren <andloren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 12:28:38 by andloren          #+#    #+#             */
/*   Updated: 2024/10/01 14:07:05 by andloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	new->next = *lst;
	*lst = new;
}

/* int	main(void)
{
	t_list	*head;
	t_list	*new_node;

	head = NULL;
	new_node = ft_lstnew("Hello, 42 students!");
	ft_lstadd_front(&head, new_node);
	printf("Node content: %s\n\n\n", (char *)head->content);
	free(head);
	return (0);
} */
