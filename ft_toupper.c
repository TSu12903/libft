/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcybak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:12:39 by tcybak            #+#    #+#             */
/*   Updated: 2024/10/10 15:12:49 by tcybak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if ( c > 96 && c < 123)
		return (c - 32);
	return (0);
}

/*
int	main(void)
{
	int	c = 98;
	printf("%d", ft_toupper(c));
}
*/
