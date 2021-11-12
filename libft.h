/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmanzano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:52:49 by cmanzano          #+#    #+#             */
/*   Updated: 2021/11/12 20:36:18 by chris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
void	*ft_memset(void	*s, int c, unsigned int n);
void	ft_bzero(void *s, unsigned int n);
void	*ft_memcpy(void *dest, const void *src, unsigned int n);
void	*ft_memchr(const void *s, int c, unsigned int n);
int		ft_memcmp(const void *s1, const void *s2, unsigned int n);
void	*ft_memmove(void *dest, const void *src, unsigned int n);
int		ft_strlen(char *c);
int		ft_strlcpy(char *dst, const char *src, unsigned int n);
int		ft_strlcat(char *dst, const char *src, unsigned int n);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, char c);
char	*ft_strrchr(const char *s, char c);
char	*ft_strrchr(const char *s, char c);
int		ft_strncmp(const char *s1, const char *s2, unsigned int n);
char	*ft_strnstr(const char *big, const char *little, unsigned int len);
int		ft_atoi(char *str);
void	*ft_calloc(unsigned int nmemb, unsigned int size);
char	*ft_strdup(const char *s);
#endif
