/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbin <aherbin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 18:07:04 by aherbin           #+#    #+#             */
/*   Updated: 2023/11/18 18:27:06 by aherbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*substr;

	i = 0;
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	substr = malloc(len);
	if (!substr)
		return (NULL);
	while (i < len)
	{
		substr[i] = s[start + i];
		++i;
	}
	return (substr);
}

/*
int main(void)
{
	char *str = "test";
	char *substr = ft_substr(str, 1, 2);

	ft_putendl_fd(substr, 1);
	free(substr);
}
*/
