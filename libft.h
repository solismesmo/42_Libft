/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livieira <livieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 18:51:24 by livieira          #+#    #+#             */
/*   Updated: 2023/07/25 00:14:43 by livieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <strings.h>

//mandatory functions
int		ft_atoi(const char *nptr);
void	ft_bzero(void *s, size_t n);
void	ft_calloc(size_t nmemb, size_t size);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
char	*ft_itoa(int n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memchr(const void *s, int c size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
			ft_memmove 
			ft_memset 
			ft_putchar_fd 
			ft_putendl_fd 
			ft_putnbr_fd 
			ft_putstr_fd 
			ft_split 
			ft_strchr 
			ft_strdup 
			ft_strjoin 
			ft_strlcat 
			ft_strlcpy 
			ft_strlen 
			ft_strmapi 
			ft_strncmp 
			ft_strnstr 
			ft_strrchr 
			ft_strtrim 
			ft_substr 
			ft_tolower 
			ft_toupper 

#endif
