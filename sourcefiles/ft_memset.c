/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbin <aherbin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:49:11 by aherbin           #+#    #+#             */
/*   Updated: 2023/11/14 15:47:17 by aherbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, unsigned int n)
{
	char	*p;

	p = s;
	while (n > 0)
	{
		p[n - 1] = c;
		--n;
	}
	return (s);
}

/*
#include <stdio.h>

int main() {
  char str[] = "Hello, world!";

  // Remplit le premier octet du tableau str avec le caractère 'A'.
  ft_memset(str, 'A', 5);

  // Affiche le contenu du tableau str.
  printf("%s\n", str);

  return 0;
}
*/
