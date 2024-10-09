/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcybak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:38:23 by tcybak            #+#    #+#             */
/*   Updated: 2024/10/08 09:38:30 by tcybak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int	i;
	int	j;
	char	*new;
	
	i = 0;
	j = 0;
	ft_strlen(s1);
	ft_strlen(s2);
	i = i + j;
	new = malloc(sizeof(char) * (i + 1));
	if(new == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while(s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	while(s2[j])
	{
		new[i + j] = s2[j];
		j++;
	}
	return (new);
}

/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	char *new;
	
	if(argc == 3)
	{
		new = ft_strjoin(argv[1], argv[2]);
		printf("%s", new);
	}
	return (0);
}
*/

