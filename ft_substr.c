/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcybak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 10:50:16 by tcybak            #+#    #+#             */
/*   Updated: 2024/10/11 10:50:33 by tcybak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"






char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char	*str;

	i = 0;
	if (start >= ft_strlen(s))
		return (ft_strdup(s));
	if (len >= ft_strlen(s) && start == 0)
		return ( ft_calloc(1,sizeof(char)));
	str = ft_calloc ((len + 1),sizeof(char));
	if (str == 0)
		return (0);
	while (i < len && s[start + i] )
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}
