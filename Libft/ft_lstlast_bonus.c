/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andloren <andloren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 12:29:23 by andloren          #+#    #+#             */
/*   Updated: 2024/10/02 09:42:22 by andloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (lst);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/* int	main(void)
{
	t_list	node1;
	t_list	node2;
	t_list	*last;

	node1.content = "First node";
	node1.next = &node2;
	node2.content = "Second node";
	node2.next = NULL;
	last = ft_lstlast(&node1);
	printf("Last node: %s\n\n\n", (char *)last->content);
	return (0);
} */
