/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_dul.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbin <aherbin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:59:42 by aherbin           #+#    #+#             */
/*   Updated: 2024/08/29 11:26:04 by aherbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_len(unsigned int n)
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

static void	*u_memalloc(int len, char *str)
{
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	str[len] = 0;
	return (str);
}

static char	*ft_u_itoa(unsigned int n)
{
	int		len;
	char	*str;

	str = NULL;
	len = get_len(n);
	str = u_memalloc(len, str);
	if (!str)
		return (NULL);
	while (len > 0)
	{
		str[len - 1] = (n % 10) + 48;
		n /= 10;
		--len;
	}
	return (str);
}

int	ft_print_u(int fd, unsigned int arg)
{
	char	*str_u;
	int		i;

	str_u = ft_u_itoa(arg);
	i = ft_strlen(str_u);
	ft_putstr_fd(str_u, fd);
	free(str_u);
	return (i);
}

int	ft_print_n(int fd, long arg)
{
	char	*str_n;
	int		i;

	str_n = ft_itoa(arg);
	i = ft_strlen(str_n);
	ft_putstr_fd(str_n, fd);
	free(str_n);
	return (i);
}
