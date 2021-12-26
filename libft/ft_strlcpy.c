/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromao-l <dromao-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 16:33:38 by dromao-l          #+#    #+#             */
/*   Updated: 2021/11/03 17:05:57 by dromao-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[i])
	{
		i++;
	}
	if (dstsize != 0)
	{
		while (src[j] != '\0' && j < (dstsize - 1))
		{
			dst[j] = src [j];
			j++;
		}
		dst[j] = '\0';
	}
	return (i);
}

/* int     main(void)
{
    char	*src;
	char	dest[19];
	int	result;
	src = "Bonjour avec 42 mon ami";
	result = ft_strlcpy(dest, src, 19);
	printf("String: %s\n", src);
	printf("Copied[18]: %s\nSource lines[%d]: %d", dest, result, result);
} */