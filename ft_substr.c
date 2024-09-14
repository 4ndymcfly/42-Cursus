/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andloren <andloren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 20:09:38 by andloren          #+#    #+#             */
/*   Updated: 2024/09/13 20:11:13 by andloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_len;
	size_t	actual_len;

	if (!s)
		return (NULL);
	s_len = strlen(s);
	if (start >= s_len)
		return (strdup(""));
	actual_len = s_len - start;
	if (actual_len > len)
		actual_len = len;
	substr = (char *)malloc((actual_len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	strncpy(substr, s + start, actual_len);
	substr[actual_len] = '\0';
	return (substr);
}

/* int	main(void)
{
	char	*s;
	unsigned int	start;
	size_t	len;
	char	*ptr;

	s = "Carabola";
	start = 3;
	len = 5;
	ptr = ft_substr(s, start, len);
	printf("%s\n", ptr);
	return (0);
} */
