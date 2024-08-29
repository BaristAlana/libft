/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbin <aherbin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 22:29:49 by aherbin           #+#    #+#             */
/*   Updated: 2024/08/29 11:58:30 by aherbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_print_c(int fd, char arg);
int		ft_print_s(int fd, char *arg);
int		ft_print_n(int fd, long int arg);
int		ft_itoa_hex(int fd, unsigned long long hx, int input, int count);
int		ft_print_u(int fd, unsigned int arg);
int		ft_print_p(int fd, unsigned long arg);

static int	ft_conv(int fd, const char identifier, va_list args)
{
	if (identifier == 'c')
		return (ft_print_c(fd, va_arg(args, int)));
	else if (identifier == 's')
		return (ft_print_s(fd, va_arg(args, char *)));
	else if (identifier == 'd' || identifier == 'i')
		return (ft_print_n(fd, (long) va_arg(args, int)));
	else if (identifier == 'u')
		return (ft_print_u(fd, (unsigned int) va_arg(args, unsigned int)));
	else if (identifier == 'p')
		return (ft_print_p(fd, va_arg(args, unsigned long)));
	else if (identifier == 'x')
		return (ft_itoa_hex(fd, va_arg(args, unsigned int), 0, 0));
	else if (identifier == 'X')
		return (ft_itoa_hex(fd, va_arg(args, unsigned int), 1, 0));
	else if (identifier == '%')
		return (ft_print_c(fd, '%'));
	else
		return (-1);
}

int	ft_dprintf(int fd, const char *format, ...)
{
	va_list	args;
	int		ret;
	int		check_conv;
	int		i;

	i = 0;
	ret = 0;
	va_start(args, format);
	if (!format || fd < 0)
		return (-1);
	while (format[i])
	{
		if (format[i] != '%')
			ret += ft_print_c(fd, format[i]);
		else
		{
			check_conv = ft_conv(fd, format[++i], args);
			if (check_conv == -1)
				return (-1);
			ret += check_conv;
		}
		++i;
	}
	va_end(args);
	return (ret);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		ret;
	int		check_conv;
	int		i;

	i = 0;
	ret = 0;
	va_start(args, format);
	if (!format)
		return (-1);
	while (format[i])
	{
		if (format[i] != '%')
			ret += ft_print_c(1, format[i]);
		else
		{
			check_conv = ft_conv(1, format[++i], args);
			if (check_conv == -1)
				return (-1);
			ret += check_conv;
		}
		++i;
	}
	va_end(args);
	return (ret);
}
