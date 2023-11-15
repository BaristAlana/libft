/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbin <aherbin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:52:29 by aherbin           #+#    #+#             */
/*   Updated: 2023/11/15 12:21:04 by aherbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*source;
	char	*destination;

	i = 0;
	source = (char *) src;
	destination = (char *) dest;
	while (i < n)
	{
		destination[i] = source[i];
		++i;
	}
	return (dest);
}

/* #include <string.h>
#include <stdio.h>

struct my_struct {
  int a;
  char b;
};
int main()
{
struct my_struct src, dst;

// Initialise la structure src.
src.a = 1;
src.b = 'A';

// Copie les données de la structure src dans la structure dst.
ft_memcpy(&dst, &src, sizeof(struct my_struct));

// Affiche les données de la structure dst.
printf("a = %d\n", dst.a);
printf("b = %c\n", dst.b);
}
 */
