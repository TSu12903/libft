/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcybak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 10:57:52 by tcybak            #+#    #+#             */
/*   Updated: 2024/10/09 10:57:56 by tcybak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == c)
		return ((char *) &s[i]);
	return (0);
}
/*
int	main(void)
{


	int	c;
	const char	str[36]= "abcdeffsewfsdfwef";
	c = 'a';
	printf("%s\n", ft_strchr(str, c));
	printf("%s", strchr(str, c));
}
*/
