/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcybak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 09:45:06 by tcybak            #+#    #+#             */
/*   Updated: 2024/10/14 09:45:09 by tcybak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"




char	**ft_split(char const *s, char c)
{
	size_t		i;
	size_t		j;
	char		**str;
	size_t		t;
	size_t		h;

	i = 0;
	t = 0;
	if (ft_strlen(s) == 1)
		return (ft_calloc(1, sizeof(char *)));
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
			t++;
		while (s[i] != c && s[i])
			i++;
	}
	str = ft_calloc((t + 1), sizeof(char *));
	if (str == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (j < t)
	{
		while (s[i] == c)
			i++;
		if (s[i] != c)
		{
			h = i;
			while (s[h] != c && s[h])
			{
				h++;
			}
			str[j] = ft_substr(s, i, (h - i));
			if (str[j] == 0)
			{
				while (j > 0)
				{
					free(str[j]);
					j--;
				}
				free(str);
			}
			j++;
		}
		i = h;
	}
	return (str);
}
/*
int	main(void)
{
	char	**str;
	size_t	i;
	char	c;
	c = '|';
	i = 0;
	str = ft_split("split  ||this|for|me|||||!|", c);
	while (str[i])
	{
		printf("%s---", str[i]);
		i++;
	}
}
*/
