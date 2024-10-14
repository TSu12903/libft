/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcybak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 09:05:14 by tcybak            #+#    #+#             */
/*   Updated: 2024/10/10 09:06:49 by tcybak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*str;

	str = (const char *) s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (char )c)
			return ((void *) &s[i]);
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{


	int	c;
	const char	str[36]= "abcdeffsewfsdfwef";
	c = 'z';
	char *ret;
	ret =  memchr(str, c, 20);
	ret = ft_memchr(str, c, 50);
	printf("%s\n", ret);
	printf("%s", ret);
}
*/
