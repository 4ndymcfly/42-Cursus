/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andloren <andloren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 12:30:34 by andloren          #+#    #+#             */
/*   Updated: 2024/10/02 13:19:43 by andloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/* void	print_content(void *content)
{
	printf("%s\n", (char *)content);
}

int	main(void)
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;

	node1 = ft_lstnew(ft_strdup("Node 1"));
	node2 = ft_lstnew(ft_strdup("Node 2"));
	head = node1;
	head->next = node2;
	ft_lstiter(head, print_content);
	printf("\n\n");
	return (0);
} */
