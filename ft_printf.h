/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromao-l <dromao-l@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 16:32:14 by dromao-l          #+#    #+#             */
/*   Updated: 2022/03/20 22:51:11 by dromao-l         ###   ########.fr       */
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
void	*ft_getf(char c);

//ft_printf_utils
int		count_conversions(char *str);
int		unsigned_num_counter(unsigned int nb, int base);
void	ft_recursiveaddr(unsigned long int nb, int is_recursive);
void	ft_putunsignednbr_fd(unsigned int nb, int fd);
int		ft_putstrnullcheck_fd(char *str, int fd);

// ft_printf_counts
int		count_chars(char c, int fd);
int		count_nbr(int nbr, int fd);
int		count_unsigned(unsigned int nb, int fd);
int		ft_putaddr_fd(void *ptr, int fd);

// ft_print_hexa
void	ft_putnbrhex_fd(unsigned int nbr, int fd);
void	ft_putnbrupperhex_fd(unsigned int nbr, int fd);
int		count_hexnum(unsigned int nbr, int fd);
int		count_hexnumupper(unsigned int nbr, int fd);

#endif