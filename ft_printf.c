/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromao-l <dromao-l@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 16:32:23 by dromao-l          #+#    #+#             */
/*   Updated: 2022/03/20 22:51:06 by dromao-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;
	int		i;

	i = 0;
	len = 0;
	va_start(args, format);
	while (format[i])
	{
		if (ft_strchr("%", format[i]))
		{
			i++;
			if (format[i] != '\0' && ft_strchr("cspdiuxX", format[i]))
			{
				len += (((int (*)())ft_getf
							(format[i++]))(va_arg(args, void *), 1));
				continue ;
			}
		}
		write(1, &format[i++], 1);
		len++;
	}
	va_end(args);
	return (len);
}
