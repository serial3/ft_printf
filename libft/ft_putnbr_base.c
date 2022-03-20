/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromao-l <dromao-l@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 22:51:22 by dromao-l          #+#    #+#             */
/*   Updated: 2022/03/20 22:51:22 by dromao-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_before(char *str, char *c)
{
	while (str != c)
	{
		if (*c == *str)
			return (0);
		str++;
	}
	return (1);
}

static int	ft_str_inside(char c, char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] == c)
			return (1);
		index++;
	}
	return (0);
}

static int	check_base(char *base)
{
	int	i;

	i = 0;
	if (base[0] == '\0' || ft_strlen(base) == 1)
		return (0);
	while (base[i] != '\0')
	{
		if (!check_before(base, &base[i]) || ft_str_inside(base[i], "+-"))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_putnbr_base(unsigned int nbr, char *base)
{
	unsigned int	lenbase;
	int				i;

	i = 0;
	lenbase = ft_strlen(base);
	if (check_base(base))
	{
		if (nbr >= lenbase)
		{
			ft_putnbr_base(nbr / lenbase, base);
			ft_putnbr_base(nbr % lenbase, base);
			i++;
		}
		else
		{
			write(1, base + nbr, 1);
			i++;
		}
	}
	return (i);
}
