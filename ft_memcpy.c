/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcybak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:42:39 by tcybak            #+#    #+#             */
/*   Updated: 2024/10/09 14:42:41 by tcybak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	const char	*s;
	char		*t;

	i = 0;
	t = (char *) dest;
	s = (const char *) src;
	if (s == 0 && t == 0)
		return (0);
	while (i < n)
	{
		t[i] = s[i];
		i++;
	}
	return ((void *) t);
}

/*
int	main(void)
{
	char	src[10] = "abcdef";
	char	dest[10] = "1234";
	size_t	n = 5;
	ft_memcpy(dest, src, n);
	memcpy(dest, src, n);
	printf("%s\n", dest);
	printf("%s", dest);
}
*/
