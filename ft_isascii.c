/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcybak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:04:48 by tcybak            #+#    #+#             */
/*   Updated: 2024/10/08 17:04:51 by tcybak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int i)
{
	if (i >= 0 && i <= 127)
		return (1);
	return (0);
}


/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_isascii(58));
}

int	main(int ac, char **av)
{
	(void)ac;
	printf("%d", ft_isascii(av[1][1]));
}
*/
