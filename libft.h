/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbin <aherbin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:43:51 by aherbin           #+#    #+#             */
/*   Updated: 2024/08/28 16:50:16 by aherbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>
# include <stdbool.h>

/* ************************************************************************** */
/*                                general ft                                  */
/* ************************************************************************** */

/**
 * @brief Checks for any printable character including space.
 *
 * @param c The character to check.
 * @return non-zero if c is printable, 0 otherwise.
 */
int		ft_isprint(int c);

/**
 * @brief Checks for a digit (0 through 9).
 *
 * @param c The character to check.
 * @return non-zero if c is a digit, 0 otherwise.
 */
int		ft_isdigit(int c);

/**
 * @brief checks whether c is a 7-bit unsigned char value that fits into
 *  the ASCII character set.
 *
 * @param c The character to check.
 * @return non-zero if c is an ASCII character, 0 otherwise.
 */
int		ft_isascii(int c);

/**
 * @brief checks for an alphanumeric character;
 * it is equivalent to (ft_isalpha(c) || ft_isdigit(c)).
 *
 * @param c The character to check.
 * @return non-zero if c is an alphanumeric character, 0 otherwise.
 */
int		ft_isalnum(int c);

/**
 * @brief checks for an alphabetic character; it is equivalent to
 *  (isupper(c) || islower(c)).
 *
 * @param c The character to check.
 * @return non-zero if c is an alphabetic character, 0 otherwise.
 */
int		ft_isalpha(int c);

/**
 * @brief checks for an uppercase letter.
 *
 * @param c The character to check.
 * @return non-zero if c is an uppercase letter, 0 otherwise.
 */
int		ft_isupper(int c);

/**
 * @brief checks for an a lowercase letter.
 *
 * @param c The character to check.
 * @return non-zero if c is a lowercase letter, 0 otherwise.
 */
int		ft_islower(int c);

/**
 * @brief Calculates the length of the string pointed to by str,
 *  excluding the terminating null byte ('\0').
 *
 * @param str The string to measure.
 * @return The size in bytes of the pointed string,
 *  excluding the null-terminating byte.
 */
size_t	ft_strlen(const char *str);

/**
 * @brief Fills the first n bytes of the memory area pointed
 *  to by s with the constant byte c.
 *
 * @param s A pointer to the memory area to fill.
 * @param c The value to fill the area with.
 * @param n The number of contiguous bytes to fill.
 * @return A pointer to the memory area s.
 */
void	*ft_memset(void *s, int c, size_t n);

/**
 * @brief Erases the data by writing zeros (bytes containing '\0') to that area.
 *
 * @param s A pointer to the memory area to clear.
 * @param n The number of contiguous bytes to clear.
 */
void	ft_bzero(void *s, size_t n);

/**
 * @brief copies n bytes from memory area src to memory area dest.
  The memory areas must not overlap (Use ft_memmove in this case).
 *
 * @param dest A pointer to the destination area.
 * @param src A pointer to the source area.
 * @param n The number of bytes from the source area to copy.
 * @return A pointer to *dest.
 */
void	*ft_memcpy(void *dest, const void *src, size_t n);

/**
 * @brief copies  n  bytes from memory area src to memory area dest.
 *   The memory areas may overlap.
 *
 * @param dest A pointer to the destination area.
 * @param src A pointer to the source area.
 * @param n The number of bytes from the source area to copy.
 * @return A pointer to *dest.
 */
void	*ft_memmove(void *dest, const void *src, size_t n);

/**
 * @brief Copy a string src to a string dest of set size. At most size-1
 *  characters will be copied. Always NULL terminates (unless siz == 0).
 *
 * @param dest The destination string.
 * @param src The string to copy.
 * @param size The size of destination string.
 * @return Returns strlen(src). If retval >= siz, truncation occurred.
 */
size_t	ft_strlcpy(char *dest, char *src, size_t size);

/**
 * @brief Concatenate two strings. At most size-1 characters will be
 *  copied. Always NULL terminates (unless size <= strlen(dst)).
 *
 * @param dest The string that receives the other one.
 * @param src The string to append at the end of dest.
 * @param size The full size of dest.
 * @return Returns strlen(src) + MIN(size, strlen(initial dest)).
 *  If return value >= size, truncation occurred.
 */
size_t	ft_strlcat(char *dest, char *src, size_t size);

/**
 * @brief Converts a lowercase letter to uppercase.
 *
 * @param c the letter to convert
 * @return The converted letter, or c if the conversion was not
 *  possible.
 */
int		ft_toupper(int c);

/**
 * @brief Converts an uppercase letter to lowercase.
 *
 * @param c the letter to convert
 * @return The converted letter, or c if the conversion was not possible.
 */
int		ft_tolower(int c);

/**
 * @brief Search for a character in a string.
 *
 * @param s The string to look in.
 * @param c The char to look for
 * @return char* The first occurence of the searched char; NULL if not found.
 */
char	*ft_strchr(const char *s, int c);

/**
 * @brief Search for a character in a string from the end.
 *
 * @param s The string to look in.
 * @param c The char to look for
 * @return char* The last occurence of the searched char; NULL if not found.
 */
char	*ft_strrchr(const char *s, int c);

/**
 * @brief Compares the first (at most) n bytes of  the two strings s1 and s2.
 *
 * @param s1 string 1
 * @param s2 string 2
 * @param n the number of bytes to compare.
 * @return 0 if s1 == s2, > 0 if s1 > s2 or < 0 is s1 < s2
 */
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/**
 * @brief scan memory for a character.
 *
 * @param s A pointer to the scanned memory area.
 * @param c The searched char. Interpreted as an unsigned char.
 * @param n The number of bytes to scan on s.
 * @return A pointer to the found char or NULL if not found.
 */
void	*ft_memchr(const void *s, int c, size_t n);

/**
 * @brief scan memory for a character. Scans the memory backward,
 *  starting from n.
 *
 * @param s A pointer to the scanned memory area.
 * @param c The searched char. Interpreted as an unsigned char.
 * @param n The number of bytes to scan on s.
 * @return A pointer to the found char or NULL if not found.
 */
void	*ft_memrchr(const void *s, int c, size_t n);

/**
 * @brief convert a string to an integer.
 *
 * @param str the string to convert.
 * @return the converted value or 0 on error.
 */
int		ft_atoi(char *str);

/**
 * @brief convert a string to a long int.
 *
 * @param str the string to convert.
 * @return the converted value or 0 on error.
 */
long	ft_atol(char *str);

/**
 * @brief Duplicate a string with malloc.
 *
 * @param s The string to duplicate.
 * @return A pointer to the duplicate string. or NULL if insufficient memory.
 */
char	*ft_strdup(const char *s);

/**
 * @brief locate a substring in a string.
 *
 * @param big The string to search in.
 * @param little The string to look for.
 * @param len The maximum lenght of str big to look through.
 * @return *big if little is null, NULL if little is not found or
 *  a pointer to the first char of found little.
 */
char	*ft_strnstr(const char *big, const char *little, size_t len);

/**
 * @brief compare memory areas like strncmp compares strings.
 *
 * @param s1 1st string to compare
 * @param s2 2nd string to compare
 * @param n max number of bytes to compare
 * @return 0 if s1 == s2, > 0 if s1 > s2 or < 0 is s1 < s2
 */
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/**
 * @brief Allocates memory for an array and returns a pointer to the
 *  allocated memory. The memory is set to zero.
 *
 * @param nmemb The number of elements
 * @param size The size of each element.
 * @return A pointer to the allocated memory. If nmemb or size is 0,
 *  then calloc() returns either NULL, or a unique pointer value that can
 *  later be successfully passed to free().
 */
void	*ft_calloc(size_t nmemb, size_t size);

/**
 * @brief Prints a char to a file descriptor.
 *
 * @param c The char to print.
 * @param fd The file descriptor to print on.
 */
void	ft_putchar_fd(char c, int fd);

/**
 * @brief Print a string to a file descriptor.
 *
 * @param str The string to print.
 * @param fd The file descriptor to print on.
 */
void	ft_putstr_fd(char *str, int fd);

/**
 * @brief Print a string to a file descriptor followed by a new line.
 *
 * @param str The string to print.
 * @param fd The file descriptor to print on.
 */
void	ft_putendl_fd(char *s, int fd);

/**
 * @brief Print a number (int) to a file descriptor.
 *
 * @param n The number to print.
 * @param fd The file descriptor to print on.
 */
void	ft_putnbr_fd(int n, int fd);

/**
 * @brief duplicate a part of a string.
 *
 * @param s the source string.
 * @param start the start index.
 * @param len the number of char to duplicate.
 * @return a pointer to the newly created substring
 * or to a NULL string on error.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len);

/**
 * @brief create a new string from the concatenation of 2 other strings.
 *
 * @param s1 1st string
 * @param s2 2nd string
 * @return a pointer to the newly created string.
 */
char	*ft_strjoin(char const *s1, char const *s2);

/**
 * @brief Trim a string from a set of chars at the begining and the end.
 *
 * @param s1 The string to trim.
 * @param set The set of char to trim.
 * @return a pointer to the newly created, trimmed string.
 */
char	*ft_strtrim(char const *s1, char const *set);

/**
 * @brief Converts an integer to a string.
 *
 * @param n the number to convert.
 * @return A pointer to the string.
 */
char	*ft_itoa(int n);

/**
 * @brief Applies a function on every char of a string.
 *
 * @param s The source string.
 * @param f The function to apply.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

/**
 * @brief Apply a function on every char of the copy of a string
 *
 * @param s the source string.
 * @param f the function to apply.
 * @return a pointer to the resulting string.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/**
 * @brief Split a string in an array of strings.
 *
 * @param s The source string.
 * @param c The splitting char.
 * @return a pointer to the array.
 */
char	**ft_split(char const *s, char c);

/* ************************************************************************** */
/*                               linked list ft                               */
/* ************************************************************************** */

/**
 * @brief Generic linked list structure
 *
 * @param content a pointer to the content data.
 * @param next a pointer to the next node.
 */
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

/**
 * @brief Creates a new list node.
 *
 * @param content The node's data
 * @return a pointer to the newly created node.
 */
t_list	*ft_lstnew(void *content);

/**
 * @brief add a node on top of a list.
 *
 * @param lst a pointer to the list.
 * @param new_node a pointer to the new HEAD node.
 */
void	ft_lstadd_front(t_list **lst, t_list *new_node);

/**
 * @brief Measure the size (number of nodes) of a list.
 *
 * @param lst The list to measure.
 * @return The size (number of nodes).
 */
int		ft_lstsize(t_list *lst);

/**
 * @brief Get the last node of a list.
 *
 * @param lst the list to look in.
 * @return A pointer to the last node of the list.
 */
t_list	*ft_lstlast(t_list *lst);

/**
 * @brief add a node at the end of a list.
 *
 * @param lst a pointer to the list.
 * @param new_node a pointer to the new TAIL node.
 */
void	ft_lstadd_back(t_list **lst, t_list *new_node);

/**
 * @brief deletes a node and its content
 *
 * @param lst the node to clear
 * @param del the function to use in order to clear
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *));

/**
 * @brief Deletes a list.
 *
 * @param lst a pointer to the HEAD of the list.
 * @param del the function to apply on the content of every node.
 */
void	ft_lstclear(t_list **lst, void (*del)(void *));

/**
 * @brief applies a function on the content of every node in a list.
 *
 * @param lst the HEAD of a list.
 * @param f The function to apply.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *));

/**
 * @brief applies a function on the content of every node of a list
 *  while removing the original one.
 *
 * @param lst a pointer to the HEAD of the source list.
 * @param f the function to apply to the content of the list.
 * @param del the function used to delete the og content.
 * @return a pointer to the HEAD of the new list.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

/* ************************************************************************** */
/*                                 ft_printf                                  */
/* ************************************************************************** */

int		ft_printf(const char *format, ...);

/* ************************************************************************** */
/*                               Get_Next_Line                                */
/* ************************************************************************** */

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif
# ifndef MAX_FD
#  define MAX_FD 64
# endif

/**
 * @brief Get the content pointed to by a fd line by line.
 *  When called in a loop, is able to read the whole file.
 *
 * @param fd The file descriptor pointing to the data to read.
 * @return A pointer to the last found line.
 */
char	*get_next_line(int fd);

#endif
