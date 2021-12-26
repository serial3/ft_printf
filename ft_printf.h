/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromao-l <dromao-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 16:32:14 by dromao-l          #+#    #+#             */
/*   Updated: 2021/12/25 17:42:41 by dromao-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <limits.h>
# include <stdio.h>
# include <stdint.h>

int		ft_printf(const char *args, ...);

int		print_string(char *c);
int		print_number(int nbr);
int		print_unsigned(unsigned int nbr);
int		print_hex(int nbr, int to_upper);
int		print_pointer(unsigned long ptr);

void	ft_putunsigned(unsigned int nbr, int fd, int *len);
void	ft_puthex_fd(unsigned int nbr, int to_upper, int fd, int *len);
void	ft_put_ptr(uintptr_t nbr, int *len);

#endif