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

static void	ft_free(char **str, size_t j)
{
	if (str[j] == 0)
	{
		while (j > 0)
		{
			free(str[j]);
			j--;
		}
		free(str);
	}
}

static size_t	ft_count(char const *s, char c, int i, int t)
{
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
			t++;
		while (s[i] != c && s[i])
			i++;
	}
	return (t);
}

static void	ft_string(char const *s, char c, size_t t, char **str )
{
	size_t	i;
	size_t	j;
	size_t	h;

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
				h++;
			str[j] = ft_substr(s, i, (h - i));
			ft_free(str, j);
			j++;
		}
		i = h;
	}
}

char	**ft_split(char const *s, char c)
{
	size_t		i;
	char		**str;
	size_t		t;

	i = 0;
	t = 0;
	t = ft_count(s, c, i, t);
	str = ft_calloc((t + 1), sizeof(char *));
	if (str == NULL)
		return (NULL);
	ft_string(s, c, t, str);
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
