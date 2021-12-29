/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromao-l <dromao-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 18:57:06 by dromao-l          #+#    #+#             */
/*   Updated: 2021/12/28 20:45:37 by dromao-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int	main()
{
	char	*b = "beca";
	unsigned int	a = 87;
	char	 c = 'b';
	int		 d = 4500;

	ft_printf("tentativa s %s \n", b);
	ft_printf("tentativa c %c \n", c);
	ft_printf("tentativa d %d \n", d);
	ft_printf("tentativa u %u \n", a);
	return (0);
}