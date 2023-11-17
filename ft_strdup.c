/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbin <aherbin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:54:38 by aherbin           #+#    #+#             */
/*   Updated: 2023/11/17 10:54:53 by aherbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		n;
	char	*str;

	i = ft_strlen((char *)s) + 1;
	n = 0;
	if (!(malloc((sizeof str) * i + 1)))
		return (0);
	str = malloc((sizeof str) * i + 1);
	while (s[n])
	{
		str[n] = s[n];
		++n;
	}
	str[n] = '\0';
	return (str);
}
/*
#include <stdio.h>
int main()
{
  char *src = "ahahah";
  char *ptr = ft_strdup(src);
  printf("%s\n", ptr);
}
*/
