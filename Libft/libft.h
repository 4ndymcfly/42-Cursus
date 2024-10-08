/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andloren <andloren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:21:29 by andloren          #+#    #+#             */
/*   Updated: 2024/09/30 12:32:52 by andloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

// Define the t_list structure
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

// Checks if the character is an alphabetic letter.
int					ft_isalpha(int c);

// Checks if the character is a digit (0-9).
int					ft_isdigit(int c);

// Checks if the character is alphanumeric.
int					ft_isalnum(int c);

// Checks if the character is an ASCII character.
int					ft_isascii(int c);

// Checks if the character is printable.
int					ft_isprint(int c);

// Calculates the length of the string.
size_t				ft_strlen(const char *s);

// Sets the first len bytes of the memory area to the value c.
void				*ft_memset(void *b, int c, size_t len);

// Sets the first n bytes of the memory area to zero.
void				ft_bzero(void *s, size_t n);

// Copies n bytes from src to dest.
void				*ft_memcpy(void *dest, const void *src, size_t n);

// Copies n bytes from src to dest, handling overlapping memory areas.
void				*ft_memmove(void *dest, const void *src, size_t n);

/* Copies up to size - 1 characters from src to dest,
	null-terminating the result.*/
size_t				ft_strlcpy(char *dst, const char *src, size_t size);

/* Appends src to string dst of size size (unlike strncat,
	size is the full size of dst, not space left).*/
size_t				ft_strlcat(char *dst, const char *src, size_t size);

// Converts a lowercase letter to uppercase.
int					ft_toupper(int c);

// Converts an uppercase letter to lowercase.
int					ft_tolower(int c);

// Locates the first occurrence of c in the string s.
char				*ft_strchr(const char *s, int c);

// Locates the last occurrence of c in the string s.
char				*ft_strrchr(const char *s, int c);

// Compares at most the first n bytes of s1 and s2.
int					ft_strncmp(const char *s1, const char *s2, size_t n);

// Scans the initial n bytes of the memory area for the first instance of c.
void				*ft_memchr(const void *s, int c, size_t n);

// Compares the first n bytes of the memory areas s1 and s2.
int					ft_memcmp(const void *s1, const void *s2, size_t n);

/* Locates the first occurrence of the null-terminated string needle in
the string haystack, where not more than len characters are searched.*/
char				*ft_strnstr(const char *haystack, const char *needle,
						size_t len);

// Converts the initial portion of the string pointed to by nptr to int.
int					ft_atoi(const char *nptr);

/* Allocates memory for an array of nmemb elements of size bytes each and
returns a pointer to the allocated memory.*/
void				*ft_calloc(size_t nmemb, size_t size);

/* Duplicates the string s1 by allocating sufficient memory for a copy of s1,
does the copy, and returns a pointer to it.*/
char				*ft_strdup(const char *s1);

/*The substr( ) function returns characters from the string value starting at
the character position specified by start.
The number of characters returned is specified by length.*/
char				*ft_substr(char const *s, unsigned int start, size_t len);

// The function ft_strjoin concat two strings (s1 & s2) into a new string (s3).
// It first checks if either s1 or s2 is NULL, returning NULL if so.
// It calculates the total length needed for the new string,
// including the null terminator.
// Memory is allocated for the new string, and if allocation fails,
// NULL is returned.
// The function then copies s1 into the new string and appends s2 to it.
// Finally, the concatenated string is returned.
char				*ft_strjoin(char const *s1, char const *s2);

char				*ft_strtrim(char const *s1, char const *set);

char				**ft_split(char const *s, char c);

char				*ft_itoa(int n);

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));

void				ft_striteri(char *s, void (*f)(unsigned int, char *));

void				ft_putchar_fd(char c, int fd);

void				ft_putstr_fd(char *s, int fd);

void				ft_putendl_fd(char *s, int fd);

void				ft_putnbr_fd(int n, int fd);

t_list				*ft_lstnew(void *content);

void				ft_lstadd_front(t_list **lst, t_list *new);

int					ft_lstsize(t_list *lst);

t_list				*ft_lstlast(t_list *lst);

void				ft_lstadd_back(t_list **lst, t_list *new);

void				ft_lstdelone(t_list *lst, void (*del)(void *));

void				ft_lstclear(t_list **lst, void (*del)(void *));

void				ft_lstiter(t_list *lst, void (*f)(void *));

t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));

#endif
