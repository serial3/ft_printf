/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromao-l <dromao-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 16:32:23 by dromao-l          #+#    #+#             */
/*   Updated: 2021/12/25 18:41:16 by dromao-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	flags_handle(va_list args, char flag)
{
	int	len;

	len = 0;
	if (flag == 'c')
		len += ft_putchar_fd((uintptr_t)va_arg(args, void *), 1);
	else if (flag == 's')
		len += print_string(va_arg(args, char *));
	else if (flag == 'd' || flag == 'i')
		len += print_number(va_arg(args, int));
	else if (flag == 'u')
		len += print_unsigned(va_arg(args, unsigned int));
	else if (flag == 'x')
		len += print_hex(va_arg(args, int), 0);
	else if (flag == 'X')
		len += print_hex(va_arg(args, int), 1);
	else if (flag == '%')
		len += ft_putchar_fd('%', 1);
	else if (flag == 'p')
		len += print_pointer((unsigned long)va_arg(args, void *));
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	char	*ptr;
	int		len;
	int		i;

	i = 0;
	len = 0;
	ptr = (char *)format;
	va_start(args, format);
	while (format[i])
	{
		if (*ptr == '%')
		{
			len += flags_handle(args, ptr[i]);
			ptr++;
			i++;
		}
		else
			len += ft_putchar_fd(ptr[0], 1);
		i++;
		ptr++;
	}
	va_end(args);
	return (len);
}
