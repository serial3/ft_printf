/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromao-l <dromao-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:05:12 by dromao-l          #+#    #+#             */
/*   Updated: 2021/11/03 17:05:13 by dromao-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	a;

	a = 0;
	while (s[a] != '\0')
	{
		if (s[a] == (char)c)
			return ((char *)s + a);
		a++;
	}
	if (c == '\0')
		return ((char *)s + a);
	return (NULL);
}

/* int	main (void)
{
	const char *g = "carlos lopes";

	printf("%s \n", ft_strchr(g, 'r'));
} */