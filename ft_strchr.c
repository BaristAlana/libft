/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbin <aherbin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:42:34 by aherbin           #+#    #+#             */
/*   Updated: 2023/11/19 22:02:22 by aherbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	len;
	size_t	i;
	char	non_num_char;

	non_num_char = c;
	len = 0;
	while (s[len])
		++len;
	i = 0;
	while (i <= len)
	{
		if (s[i] == non_num_char)
			return ((char *)&s[i]);
		++i;
	}
	return (NULL);
}
