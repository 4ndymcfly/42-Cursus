/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andloren <andloren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:34:43 by andloren          #+#    #+#             */
/*   Updated: 2024/10/01 11:11:08 by andloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*str;

	i = 0;
	len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/* char	ft_toupper_mapi(unsigned int i, char c)
{
	(void)i;
	return ((char)ft_toupper((int)c));
	// Cast para asegurar que el char se maneja como int
}

int	main(void)
{
	char	*s;
	char	*result;

	s = "Hello, World!";
	result = ft_strmapi(s, ft_toupper_mapi);
	if (result)
	{
		printf("Original string: %s\n", s);
		printf("Modified string: %s\n\n\n", result);
		free(result);
	}
	else
	{
		printf("Memory allocation failed\n");
	}
	return (0);
} */
