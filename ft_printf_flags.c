/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_flags.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromao-l <dromao-l@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 17:10:52 by dromao-l          #+#    #+#             */
/*   Updated: 2022/03/20 22:50:52 by dromao-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	(*ft_getf(char c))
{
	if (c == 'c')
		return (&count_chars);
	else if (c == 's')
		return (&ft_putstrnullcheck_fd);
	else if (c == 'd' || c == 'i')
		return (&count_nbr);
	else if (c == 'p')
		return (&ft_putaddr_fd);
	else if (c == 'u')
		return (&count_unsigned);
	else if (c == 'x')
		return (&count_hexnum);
	else if (c == 'X')
		return (&count_hexnumupper);
	return (NULL);
}
