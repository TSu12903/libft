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
# include <stdio.h>
# include <string.h>
# include <ctype.h>

// ecrire size_t au lieu de unsigned int
// typedef size_t	unsigned int;

char		*ft_strjoin(char const *s1, char const *s2);
int			ft_isalpha(int c);
int			ft_strlen(char const *s);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
void		*ft_memset(void *s, int c, size_t n);
int			ft_isprint(int c);
char		*ft_strchr(const char *s, int c);
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *dest, const void *src, size_t n);
unsigned	int	ft_strlcat(char *dst, const char *src, size_t size);
int			ft_strncmp(char *s1, char *s2, unsigned int n);
void		*ft_memchr(const void *s, int c, size_t n);
unsigned int	ft_strlcpy(char *dst, char *src, size_t size);
int			ft_atoi(const char *nptr);
void		*ft_calloc(size_t nmemb, size_t size);
char		*ft_strdup(const char *s);
int			ft_toupper(int c);

#endif
