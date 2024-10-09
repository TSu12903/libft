/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcybak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:33:03 by tcybak            #+#    #+#             */
/*   Updated: 2024/10/09 18:33:05 by tcybak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		j;
	const char	*s;
	char		*d;

	i = 0;
	j = 0;
	d = (char *) dst;
	s = (const char *) src;
	while (d[i])
		i++;
	while (s[j] && j < size)
	{
		d[j + i] = s[i];
		j++;
	}
	d[j + i] = '\0';
	while (s[j])
		j++;
	return (i + j);	
}
