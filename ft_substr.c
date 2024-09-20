/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andloren <andloren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 20:09:38 by andloren          #+#    #+#             */
/*   Updated: 2024/09/20 10:39:13 by andloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = strlen(s);
	if (start >= s_len)
		return (strdup(""));
	if (start + len > s_len)
		len = s_len - start;
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	memcpy(substr, s + start, len);
	substr[len] = '\0';
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
