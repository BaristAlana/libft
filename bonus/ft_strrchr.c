/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbin <aherbin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:42:34 by aherbin           #+#    #+#             */
/*   Updated: 2023/11/19 22:05:28 by aherbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	non_num_char;

	non_num_char = c;
	len = 0;
	while (s[len])
		++len;
	while (len > 0)
	{
		if (s[len] == non_num_char)
			return ((char *)&s[len]);
		--len;
	}
	if (s[0] == non_num_char)
		return ((char *)&s[0]);
	return (NULL);
}
