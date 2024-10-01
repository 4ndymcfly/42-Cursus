/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andloren <andloren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 12:26:50 by andloren          #+#    #+#             */
/*   Updated: 2024/10/01 13:13:06 by andloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = 0;
	return (node);
}
/* int	main(void)
{
	t_list	*node;
	char	*content;

	content = "Hello, 42 students!";
	node = ft_lstnew(content);
	printf("Node content: %s\n", (char *)node->content);
	printf("Node address: %p\n", (void *)node);
	printf("Next node address: %p\n", (void *)node->next);
	free(node);
	return (0);
} */
