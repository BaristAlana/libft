/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_csph.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbin <aherbin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 22:30:38 by aherbin           #+#    #+#             */
/*   Updated: 2024/08/29 11:51:02 by aherbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_c(int fd, char arg)
{
	write (fd, &arg, 1);
	return (1);
}

int	ft_print_s(int fd, char *arg)
{
	int	i;

	i = 0;
	if (!arg)
	{
		ft_putstr_fd("(null)", fd);
		return (6);
	}
	while (arg[i])
		ft_print_c(fd, arg[i++]);
	return (i);
}

int	ft_itoa_hex(int fd, unsigned long long hx, int input, int count)
{
	char		*hx_b;
	int			i;
	static int	ret;

	if (count == 0)
		ret = 0;
	if (input == 0)
		hx_b = "0123456789abcdef";
	else
		hx_b = "0123456789ABCDEF";
	if (hx >= 16)
	{
		count++;
		ft_itoa_hex(fd, hx / 16, input, 1);
	}
	i = hx % 16;
	ret += (int) write(fd, &hx_b[i], 1);
	return (ret);
}

int	ft_print_p(int fd, unsigned long arg)
{
	if (!arg)
		return (ft_print_s(fd, "(nil)"));
	ft_putstr_fd("0x", fd);
	return (ft_itoa_hex(fd, arg, 0, 0) + 2);
}
