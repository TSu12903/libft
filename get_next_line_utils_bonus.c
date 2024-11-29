/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcybak <tcybak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:54:12 by tcybak            #+#    #+#             */
/*   Updated: 2024/11/11 18:25:26 by tcybak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s1)
{
	size_t	i;

	i = 0;
	while (s1[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*new;

	if (s1 == 0 || s2 == 0)
		return (0);
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	new = ft_calloc((i + j + 1), sizeof(char));
	if (new == NULL)
		return (NULL);
	i = -1;
	j = -1;
	while (s1[++i])
		new[i] = s1[i];
	while (s2[++j])
		new[i + j] = s2[j];
	new[i + j] = '\0';
	return (new);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == (unsigned char)c)
		return ((char *) &s[i]);
	return (0);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*new;
	char	*tab;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (nmemb > (size_t) - 1 / size)
		return (NULL);
	new = malloc(size * (nmemb));
	if (new == NULL)
		return (NULL);
	tab = (char *) new;
	while (nmemb--)
	{
		*tab = 0;
		tab++;
	}
	return ((void *) new);
}
