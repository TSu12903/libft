/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcybak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 10:15:33 by tcybak            #+#    #+#             */
/*   Updated: 2024/10/09 10:15:37 by tcybak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void  *ft_memset(void *s, int c, size_t n)
{
	char	*tab;

	tab = (char *) s;
	while (n--)
	{
		*tab = c;
		tab++;
	}
	return (s);
}
/*
int	main(void)
{
	char str[] = "sasqdwwwwwwwwwwwwwasd";
	int	c = 65;
	size_t	count = 5;
	printf("%s\n", (char *) ft_memset(str,c,count));
	printf("%s\n",(char *) memset(str,c,count));

	
	return (0);
}
*/
