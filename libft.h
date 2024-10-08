/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcybak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:58:24 by tcybak            #+#    #+#             */
/*   Updated: 2024/10/08 09:58:28 by tcybak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// si header pas defini fait la suite sinon non

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

// ecrire size_t au lieu de unsigned int
typedef size_t unsigned int

char	*ft_strjoin(char const *s1, char const *s2);
int	ft_isalpha(int i);
int	ft_strlen(char const *s1);
int	ft_isalpha(int i);
int	ft_isascii(int i);

#endif
