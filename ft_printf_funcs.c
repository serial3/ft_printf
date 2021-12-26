/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_funcs.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromao-l <dromao-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 17:10:52 by dromao-l          #+#    #+#             */
/*   Updated: 2021/12/25 18:41:23 by dromao-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunsigned(unsigned int nbr, int fd, int *len)
{
	if (nbr && nbr < 10)
	{
		nbr += '0';
		*len += ft_putchar_fd(nbr, fd);
	}
	else
	{
		ft_putunsigned(nbr / 10, fd, len);
		nbr = nbr % 10 + '0';
		*len += ft_putchar_fd(nbr, fd);
	}
}

void	ft_put_ptr(uintptr_t nbr, int *len)
{
	if (nbr >= 16)
	{
		ft_put_ptr (nbr / 16, len);
		ft_put_ptr (nbr % 16, len);
	}
	else
		*len += ft_putchar_fd("0123456789abcdef"[nbr % 16], 1);
}

void	ft_puthex_fd(unsigned int nbr, int to_upper, int fd, int *len)
{
	if (nbr >= 16)
		ft_puthex_fd(nbr / 16, to_upper, fd, len);
	if (to_upper)
		*len += ft_putchar_fd("0123456789ABCDEF"[nbr % 16], fd);
	else
		*len += ft_putchar_fd("0123456789abcdef"[nbr % 16], fd);
}
