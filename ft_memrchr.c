/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbin <aherbin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:42:34 by aherbin           #+#    #+#             */
/*   Updated: 2023/11/17 17:59:49 by aherbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memrchr(const void *s, int c, size_t n)
{
	size_t	len;
	char	*cmp;

	len = 0;
	cmp = (char *)s;
	while (cmp[len])
		++len;
	if (len > n)
		len = n;
	cmp += (len);
	while (len > 0)
	{
		if (*cmp == c)
			return (cmp);
		cmp--;
		--len;
	}
	if (cmp[0] == c)
		return (cmp);
	return (NULL);
}

/*#include <stdio.h>
#include <string.h>

void	test_memrchr(const void *ptr, int value, size_t num) {
	const unsigned char *result = ft_memrchr(ptr, value, num);

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

	printf("Testing 'memrchr' function:\n");

	// Test cases
	test_memrchr(str, value_to_find, strlen(str));
		// Case 1: Value exists in the string
	test_memrchr(str, 'x', strlen(str));
		// Case 2: Value does not exist in the string
	test_memrchr(str, '\0', strlen(str));
		// Case 3: Null terminator character
	test_memrchr(str, 'H', 1);
		// Case 4: Search in the first character only
	test_memrchr(str, '!', 1);
		// Case 5: Search in the last character only
	test_memrchr(str, '!', 0);                    // Case 6: Empty search space

	return (0);
}
*/
