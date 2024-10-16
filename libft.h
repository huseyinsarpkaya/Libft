/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husarpka <husarpka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:48:02 by husarpka          #+#    #+#             */
/*   Updated: 2024/10/15 14:03:27 by husarpka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>

int ft_isalpha(int c);
int	ft_isdigit(int c);
void *ft_memset(void *b, int c, size_t len);
size_t	ft_strlen(const char *s);
int	ft_isprint(int c);
int	ft_isascii(int c);
void    ft_bzero(void *s, size_t n);
int	ft_isalnum(int c);
void    *ft_memmove(void *dst, const void *src, size_t len);
void    *ft_memcpy(void *dst, const void *src, size_t n);
char *ft_strchr(const char *s, int c);
int    ft_toupper(int c);
int    ft_tolower(int c);
void ft_putchar_fd(char c, int fd);
void ft_putnbr_fd(int n, int fd);
#endif
