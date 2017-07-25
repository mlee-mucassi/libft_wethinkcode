/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmucassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 14:21:45 by lmucassi          #+#    #+#             */
/*   Updated: 2017/07/22 17:21:41 by lmucassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

void	ft_putchar(char c);
void	*ft_memset(void *dest, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t len);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	ft_bzero(void *str, size_t n);
void	*ft_memalloc(size_t size);
void	ft_memdel(void **p);
void	ft_strdel(char **as);
void	ft_striteri(char *s,void (*f)(unsigned int, char *s));
	
char	*ft_strdup(const char *s);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *big, const char *little);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strncat(char *dest, const char *src, size_t n);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strnew(size_t size);

int		ft_atoi(char *str);
int		ft_strcmp(const char *c1,const char *c2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_strlen(const char *str);
int		ft_isdigit(int c);
int		ft_isascii(int c);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isprint(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_memcmp(const void *s1, const void *s2, size_t n);



size_t	ft_strlcat(char *dest, const char *src, size_t size);

#endif
