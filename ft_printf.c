/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwong <yiwong@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 19:30:01 by yiwong            #+#    #+#             */
/*   Updated: 2023/01/28 01:19:02 by yiwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libftprintf.h"

int	ft_printf_s(char *s)
{
	int	r;

	r = 0;
	while (*s)
		r += write(1, s++, 1);
	return (r);
}

int	ft_printf_base(unsigned int long long u, int len, char *set, int base)
{
	if (u == 0)
		return (len);
	else
		len = ft_printf_base(u / base, len, set, base);
	write(1, &set[(u % base)], 1);
	len++;
	return (len);
}

int	ft_printf_fmt(const char fmt, va_list *args)
{
	int	c;

	if (fmt == 'c')
	{
		c = va_arg(*args, int);
		return (write(1, &c, 1));
	}
	if (fmt == 's')
		return (ft_printf_s(va_arg(*args, char *)));
	if (fmt == 'p')
		return (ft_printf_s("0x") + ft_printf_base(va_arg(*args, \
			unsigned int long long), 0, "0123456789abcdef", 16));
	if (fmt == 'd' || fmt == 'i')
		return (ft_printf_s(ft_itoa(va_arg(*args, int))));
	if (fmt == 'u')
		return (ft_printf_base(va_arg(*args, unsigned int), \
			0, "0123456789", 10));
	if (fmt == 'x')
		return (ft_printf_base(va_arg(*args, unsigned int), \
			0, "0123456789abcdef", 16));
	if (fmt == 'X')
		return (ft_printf_base(va_arg(*args, unsigned int long long), \
			0, "0123456789ABCDEF", 16));
	ft_putchar_fd('%', 1);
	return (1);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		len;

	va_start(args, str);
	len = 0;
	while (*str)
	{
		if (*str == '%')
			len += ft_printf_fmt(*(++str), &args);
		else
			len += write(1, str, 1);
		str++;
	}
	va_end(args);
	return (len);
}

// int	main(void)
// {
// 	int 			n;
// 	char 			c;
// 	char			*s;
// 	unsigned int	u;
// 	unsigned int	x;
// 	int				r1;
// 	int				r2;

// 	c = 'c';
// 	n = -2147483648;
// 	s = "Hello World. )OIWEFRUWISUHRGKLBSKhgq3p894tgjrpur3pw84ugf. Yes.";
// 	u = 4294967295;
// 	x = 4294967295;
// 	r1 = ft_printf("c:%c\ns:%s\np:%p\nu:%u\ni:%i\nd:%d\nx:%x\nX:%X\n\n", \
// 		c, s, s, u, n, n, x, x);
// 	r2 = printf("c:%c\ns:%s\np:%p\nu:%u\ni:%i\nd:%d\nx:%x\nX:%X\n\n", \
// 		c, s, s, u, n, n, x, x);
// 	printf("ft_printf returns: %i\nprintf returns: %i\n", r1, r2);
// 	return (0);
// }
