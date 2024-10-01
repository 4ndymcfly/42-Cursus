/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andloren <andloren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 12:26:50 by andloren          #+#    #+#             */
/*   Updated: 2024/10/01 13:11:03 by andloren         ###   ########.fr       */
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
	printf("Contenido del nodo: %s\n", (char *)node->content);
	printf("Dirección del nodo: %p\n", (void *)node);
	printf("Dirección del siguiente nodo: %p\n\n\n", (void *)node->next);
	free(node);
	return (0);
} */
