/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andloren <andloren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:34:43 by andloren          #+#    #+#             */
/*   Updated: 2024/10/01 12:04:22 by andloren         ###   ########.fr       */
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
	// Cast to ensure that the char is handled as an int
}

int	main(void)
{
	char	*s;
	char	*result;

	s = "Hello, 42 students!";
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
