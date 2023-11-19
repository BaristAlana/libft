/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbin <aherbin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 15:15:17 by aherbin           #+#    #+#             */
/*   Updated: 2023/11/19 17:07:42 by aherbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*min_int(void)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * 12);
	str = "-2147483648";
	return (str);
}

static int	get_sign(int n)
{
	if (n < 0)
		return (-1);
	return (1);
}

static int	get_len(int n)
{
	int	len;

	len = 1;
	while (n >= 10)
	{
		++len;
		n /= 10;
	}
	return (len);
}

static void	*memalloc(int sign, int len, char *str)
{
	if (sign == -1)
	{
		str = (char *)malloc(sizeof(char) * len + 2);
		str[0] = '-';
	}
	else
		str = (char *)malloc(sizeof(char) * len + 1);
	str[len + 1] = 0;
	return (str);
}

char	*ft_itoa(int n)
{
	int		len;
	int		sign;
	char	*str;

	if (n == -2147483648)
		return (min_int());
	sign = get_sign(n);
	if (sign < 0 && n != -2147483648)
		n *= -1;
	len = get_len(n);
	str = memalloc(sign, len, str);
	if (!str)
		return (NULL);
	while (len > 0)
	{
		if (sign < 0)
			str[len] = (n % 10) + 48;
		else
			str[len - 1] = (n % 10) + 48;
		n /= 10;
		--len;
	}
	return (str);
}

/*#include <stdio.h>
#include <limits.h>

int main()
{
	int n = 256;
	int n1 = INT_MIN;
	int n2 = -0;
	int n3 = INT_MAX;

	printf("%s\n", ft_itoa(n));
	printf("%s\n", ft_itoa(n1));
	printf("%s\n", ft_itoa(n2));
	printf("%s\n", ft_itoa(n3));
}*/
