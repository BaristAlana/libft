/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbin <aherbin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:42:34 by aherbin           #+#    #+#             */
/*   Updated: 2023/11/19 22:13:25 by aherbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			len;
	size_t			i;
	unsigned char	*cmp;
	unsigned char	non_num_char;

	non_num_char = c;
	cmp = (unsigned char *)s;
	len = 0;
	while (cmp[len])
		++len;
	i = 0;
	while (i <= len && i < n)
	{
		if (*cmp == non_num_char)
			return (cmp);
		++i;
		cmp++;
	}
	return (NULL);
}

/*#include <stdio.h>
#include <string.h>

void	test_memchr(const void *ptr, int value, size_t num) {
	const unsigned char *result = ft_memchr(ptr, value, num);

	if (result != NULL) {
		printf("Value '%c' found at position: %td\n", (char)value, result
			- (const unsigned char *)ptr);
	} else {
		printf("Value '%c' not found.\n", (char)value);
	}
}

int	main(void) {
	char str[] = "Hello, world!";
	int value_to_find = 'o';

	printf("Testing 'memchr' function:\n");

	// Test cases
	test_memchr(str, value_to_find, strlen(str));
		// Case 1: Value exists in the string
	test_memchr(str, 'x', strlen(str));
		// Case 2: Value does not exist in the string
	test_memchr(str, '\0', strlen(str));
		// Case 3: Null terminator character
	test_memchr(str, 'H', 1);
		// Case 4: Search in the first character only
	test_memchr(str, '!', 1);
		// Case 5: Search in the last character only
	test_memchr(str, '!', 0);                    // Case 6: Empty search space

	return (0);
}
*/
