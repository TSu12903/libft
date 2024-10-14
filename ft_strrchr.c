/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcybak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:48:57 by tcybak            #+#    #+#             */
/*   Updated: 2024/10/14 14:49:00 by tcybak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	j;

	i = ft_strlen(s) - 1;
	j = 0;
	
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			return ((char *) &s[i]);
		i--;
	}
	if (s[i] == (unsigned char)c)
		return ((char *) &s[i]);
	return (0);
}

/*
int	main(void)
{
	int	c;
	const char	str[36]= "abcdeffsewfsdfwe";
	c = 'f';
	printf("%s\n", ft_strrchr(str, c));
	printf("%s", strrchr(str, c));
}
*/
