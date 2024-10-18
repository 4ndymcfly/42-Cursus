/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andloren <andloren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:21:29 by andloren          #+#    #+#             */
/*   Updated: 2024/10/18 12:42:43 by andloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

// Define the t_list structure
typedef struct s_list
{
	void					*content;
	struct s_list			*next;
}							t_list;

// Checks if the character is an alphabetic letter.
int							ft_isalpha(int c);

// Checks if the character is a digit (0-9).
int							ft_isdigit(int c);

// Checks if the character is alphanumeric.
int							ft_isalnum(int c);

// Checks if the character is an ASCII character.
int							ft_isascii(int c);

// Checks if the character is printable.
int							ft_isprint(int c);

// Calculates the length of the string.
size_t						ft_strlen(const char *s);

// Sets the first len bytes of the memory area to the value c.
void						*ft_memset(void *b, int c, size_t len);

// Sets the first n bytes of the memory area to zero.
void						ft_bzero(void *s, size_t n);

// Copies n bytes from src to dest.
void						*ft_memcpy(void *dest, const void *src, size_t n);

// Copies n bytes from src to dest, handling overlapping memory areas.
void						*ft_memmove(void *dest, const void *src, size_t n);

/* Copies up to size - 1 characters from src to dest,
	null-terminating the result.*/
size_t						ft_strlcpy(char *dst, const char *src, size_t size);

/* Appends src to string dst of size size (unlike strncat,
	size is the full size of dst, not space left).*/
size_t						ft_strlcat(char *dst, const char *src, size_t size);

// Converts a lowercase letter to uppercase.
int							ft_toupper(int c);

// Converts an uppercase letter to lowercase.
int							ft_tolower(int c);

// Locates the first occurrence of c in the string s.
char						*ft_strchr(const char *s, int c);

// Locates the last occurrence of c in the string s.
char						*ft_strrchr(const char *s, int c);

// Compares at most the first n bytes of s1 and s2.
int							ft_strncmp(const char *s1, const char *s2,
								size_t n);

// Scans the initial n bytes of the memory area for the first instance of c.
void						*ft_memchr(const void *s, int c, size_t n);

// Compares the first n bytes of the memory areas s1 and s2.
int							ft_memcmp(const void *s1, const void *s2, size_t n);

/* Locates the first occurrence of the null-terminated string needle in
the string haystack, where not more than len characters are searched.*/
char						*ft_strnstr(const char *haystack,
								const char *needle, size_t len);

// Converts the initial portion of the string pointed to by nptr to int.
int							ft_atoi(const char *nptr);

/* Allocates memory for an array of nmemb elements of size bytes each and
returns a pointer to the allocated memory.*/
void						*ft_calloc(size_t nmemb, size_t size);

/* Duplicates the string s1 by allocating sufficient memory for a copy of s1,
does the copy, and returns a pointer to it.*/
char						*ft_strdup(const char *s1);

/*The substr( ) function returns characters from the string value starting at
the character position specified by start.
The number of characters returned is specified by length.*/
char						*ft_substr(char const *s, unsigned int start,
								size_t len);

/* The function ft_strjoin concat two strings (s1 & s2) into a new string (s3).
It first checks if either s1 or s2 is NULL, returning NULL if so.
It calculates the total length needed for the new string,
including the null terminator.
Memory is allocated for the new string, and if allocation fails,
NULL is returned.
The function then copies s1 into the new string and appends s2 to it.
Finally, the concatenated string is returned.*/
char						*ft_strjoin(char const *s1, char const *s2);

/* Removes all characters from the beginning and end of s1 that are present
in the string set, and returns the trimmed string.
If allocation fails, NULL is returned.*/
char						*ft_strtrim(char const *s1, char const *set);

/* Splits the string s into an array of strings using the character c as a
delimiter. Memory is allocated for each substring and the array itself.
If allocation fails, NULL is returned.*/
char						**ft_split(char const *s, char c);

/* Converts the integer n into a null-terminated string and returns it.
Memory is allocated for the string. If allocation fails, NULL is returned.*/
char						*ft_itoa(int n);

/* Applies the function f to each character of the string s to create a new
string (with malloc(3)) resulting from successive applications of f.
If allocation fails, NULL is returned.*/
char						*ft_strmapi(char const *s, char (*f)(unsigned int,
									char));

/* Applies the function f to each character of the string s, passing its
index as the first argument to f. Each character is passed by reference to f,
and can thus be modified.*/
void						ft_striteri(char *s, void (*f)(unsigned int,
									char *));

/* Outputs the character c to the given file descriptor fd.*/
void						ft_putchar_fd(char c, int fd);

/* Outputs the string s to the given file descriptor fd.*/
void						ft_putstr_fd(char *s, int fd);

/* Outputs the string s to the given file descriptor fd,
	followed by a newline.*/
void						ft_putendl_fd(char *s, int fd);

/* Outputs the integer n to the given file descriptor fd.*/
void						ft_putnbr_fd(int n, int fd);

/* Allocates (with malloc(3)) and returns a new element. The variable content
is initialized with the value of the parameter content. The variable next is
initialized to NULL.*/
t_list						*ft_lstnew(void *content);

/* Adds the element new at the beginning of the list lst.*/
void						ft_lstadd_front(t_list **lst, t_list *new);

/* Counts the number of elements in the list lst and returns it.*/
int							ft_lstsize(t_list *lst);

/* Returns the last element of the list lst.*/
t_list						*ft_lstlast(t_list *lst);

/* Adds the element new at the end of the list lst.*/
void						ft_lstadd_back(t_list **lst, t_list *new);

/* Takes as a parameter an element lst and frees its content using the
function del given as a parameter, then frees the element.*/
void						ft_lstdelone(t_list *lst, void (*del)(void *));

/* Deletes and frees the given element and every successor of that element,
using the function del and	free(3).*/
void						ft_lstclear(t_list **lst, void (*del)(void *));

/* Iterates through the list lst and applies the function f to the content
of each element.*/
void						ft_lstiter(t_list *lst, void (*f)(void *));

/* Iterates through the list lst and applies the function f to the content
of each element, creating a new list resulting from successive applications
of f. The del function is used to delete the content of an element if needed.*/
t_list						*ft_lstmap(t_list *lst, void *(*f)(void *),
								void (*del)(void *));

#endif
