/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbin <aherbin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:59:41 by aherbin           #+#    #+#             */
/*   Updated: 2023/11/15 11:23:40 by aherbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*p;

	p = s;
	while (n > 0)
	{
		p[n - 1] = 0;
		--n;
	}
}
/*
#include <stdio.h>
int main()
{
  char str[] = "Hello, world!";

  // Remplit le premier octet du tableau str avec le caractère 'A'.
  ft_bzero(str, 5);

  // Affiche le contenu du tableau str.
  for (int i = 0; i< 13; ++i)
  	printf("%d\n", str[i]);

  return 0;
}
*/
