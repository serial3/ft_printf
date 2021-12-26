/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromao-l <dromao-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:57:30 by dromao-l          #+#    #+#             */
/*   Updated: 2021/11/03 16:57:33 by dromao-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*t;

	if (b == 0)
		return (NULL);
	t = b;
	while (len--)
	{
		*t++ = c;
	}
	return (b);
}

/* int	main(void)
{
	char *a = "abcdefghi";

	printf("%p \n", ft_memset(a, '.', 3));
}
 */