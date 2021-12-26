/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromao-l <dromao-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 18:55:25 by dromao-l          #+#    #+#             */
/*   Updated: 2021/11/03 17:05:52 by dromao-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	b;
	unsigned int	return_value;

	return_value = ft_strlen(dst) + ft_strlen(src);
	i = ft_strlen(dst);
	b = 0;
	if (dstsize <= ft_strlen(dst))
		return (ft_strlen(src) + dstsize);
	if (dstsize > 0 && dstsize > ft_strlen(dst))
	{
		while (i < dstsize - 1 && src[b] != '\0')
		{
			dst[i] = src[b];
			i++;
			b++;
		}
		dst[i] = '\0';
	}
	return (return_value);
}

/* int	main(void)
{
	char dest[18] = "abcdef0";
	char src[15] = "abcdef1";

	printf("teste: %u\n", ft_strlcat(dest, src, 10));
}
 */