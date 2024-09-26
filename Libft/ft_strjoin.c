/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andloren <andloren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 10:08:28 by andloren          #+#    #+#             */
/*   Updated: 2024/09/23 12:03:45 by andloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	char	tlen;

	if (!s1 || !s2)
		return (NULL);
	tlen = ft_strlen(s1) + ft_strlen(s2) + 1;
	s3 = (char *)malloc(sizeof(char) * (tlen));
	if (!s3)
		return (NULL);
	ft_strlcpy(s3, s1, tlen);
	ft_strlcat(s3, s2, tlen);
	return (s3);
}

/* int	main(void)
{
	char	*str1;
	char	*str2;
	char	*result;

	str1 = "Hello, ";
	str2 = "world!";
	result = ft_strjoin(str1, str2);
	if (result)
	{
		printf("%s\n", result);
		free(result);
	}
	else
	{
		printf("Memory allocation failed\n");
	}
	return (0);
} */
