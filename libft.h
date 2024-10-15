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
// typedef size_t	unsigned int;

char		*ft_strjoin(char const *s1, char const *s2);
int			ft_isalpha(int c);
size_t		ft_strlen(char const *s);
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
unsigned	int	ft_strlcpy(char *dst, char *src, size_t size);
int			ft_atoi(const char *nptr);
void		*ft_calloc(size_t nmemb, size_t size);
char		*ft_strdup(const char *s);
int			ft_toupper(int c);
int			ft_tolower(int c);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		ft_putstr_fd(char *s, int fd);
void		ft_putchar_fd(char c, int fd);
char		*ft_strnstr(const char *big, const char *little, size_t len);
char		*ft_substr(char const *s, unsigned int start, size_t len);
void		ft_putendl_fd(char *s, int fd);
char		*ft_strtrim(char const *s1, char const *set);
void		ft_putnbr_fd(int n, int fd);
char		**ft_split(char const *s, char c);
char		*ft_strrchr(const char *s, int c);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void		ft_striteri(char *s, void (*f)(unsigned int, char*));
char		*ft_itoa(int n);
void		*ft_memmove(void *dest, const void *src, size_t n);

#endif
