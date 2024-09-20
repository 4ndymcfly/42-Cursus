/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andloren <andloren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 20:03:00 by andloren          #+#    #+#             */
/*   Updated: 2024/09/20 12:10:08 by andloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	size_t	len;

	len = ft_strlen(s1);
	ptr = ft_calloc(len + 1, sizeof(char));
	if (!ptr)
		return (NULL);
	return (ft_memcpy(ptr, s1, len));
}

/* int	main(void)
{
	char	*s1;
	char	*ptr;

	s1 = "Carabola";
	ptr = ft_strdup(s1);
	printf("%s\n", ptr);
	return (0);
} */
