/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_counts.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromao-l <dromao-l@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 21:59:40 by dromao-l          #+#    #+#             */
/*   Updated: 2022/03/20 22:50:43 by dromao-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	count_chars(char c, int fd)
{
	ft_putchar_fd(c, fd);
	return (1);
}

int	count_nbr(int nbr, int fd)
{
	int	total;

	total = 0;
	ft_putnbr_fd(nbr, fd);
	if (nbr == 0)
		return (1);
	if (nbr == -2147483648)
		return (11);
	else if (nbr < 0)
	{
		nbr = -nbr;
		total++;
	}
	while (nbr != 0)
	{
		nbr /= 10;
		total++;
	}
	return (total);
}

int	count_unsigned(unsigned int nb, int fd)
{
	ft_putunsignednbr_fd(nb, fd);
	return (unsigned_num_counter(nb, 10));
}

int	ft_putaddr_fd(void *ptr, int fd)
{
	unsigned long int	temp;
	int					total;

	total = 2;
	temp = (unsigned long int)ptr;
	if (ptr == NULL || ptr == 0 || temp == 0)
	{
		write (fd, "0x0", 3);
		return (3);
	}
	while (temp != 0)
	{
		temp /= 16;
		total++;
	}
	ft_recursiveaddr((unsigned long int)ptr, 0);
	return (total);
}
