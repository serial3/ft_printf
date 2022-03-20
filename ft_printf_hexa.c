/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromao-l <dromao-l@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 22:15:32 by dromao-l          #+#    #+#             */
/*   Updated: 2022/03/20 22:50:57 by dromao-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbrhex_fd(unsigned int nbr, int fd)
{
	char	*base;

	base = "0123456789abcdef";
	if (nbr >= (unsigned int)16)
		ft_putnbrhex_fd(nbr / 16, fd);
	ft_putchar_fd(base[nbr % 16], fd);
}

void	ft_putnbrupperhex_fd(unsigned int nbr, int fd)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (nbr >= 16)
		ft_putnbrupperhex_fd(nbr / 16, fd);
	ft_putchar_fd(base[nbr % 16], fd);
}

int	count_hexnum(unsigned int nbr, int fd)
{
	ft_putnbrhex_fd((unsigned int)nbr, fd);
	return (unsigned_num_counter(nbr, 16));
}

int	count_hexnumupper(unsigned int nbr, int fd)
{
	ft_putnbrupperhex_fd((unsigned int)nbr, fd);
	return (unsigned_num_counter(nbr, 16));
}
