/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbres <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/02 16:27:16 by sbres             #+#    #+#             */
/*   Updated: 2013/12/02 16:29:38 by sbres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <string.h>
# define BUFF_SIZE 1
int		*ft_set_zero(int size);
char	*ft_strncat(char *str1, const char *str2, int num);
char	*ft_strcat(char *str1, const char *str2);
char	*ft_strncpy(char *str1, const char *str2, int end);
int		ft_tolower(int UpCase);
char	*ft_strstr(const char *str1, const char *str2);
int		getnumber(char *str, int counter);
int		Makenumber(char *str, int start, int size);
int		getsizenum(char *str, int counter);
int		ft_atoi(const char *str);
char	*ft_strdup(const char *str);
int		ft_isalpha(int Char);
int		ft_isdigit(int Char);
int		ft_isalnum(int Char);
int		ft_isascii(int Char);
int		ft_isprint(int Char);
int		ft_toupper(int DownCase);
char	*ft_strcpy(char *str1, const char *str2);
size_t	ft_strlen(const char *str);
void	*ft_memset(void *ptr, int ValueToBeSet, size_t num);
void	ft_bzero(void *str, size_t nb);
void	*ft_memcpy(void *destination, const void *source, size_t num);
void	*ft_memccpy(void *dest, const void *source, int Char, size_t num);
void	*ft_memmove(void *dest, const void *source, size_t num);
void	*ft_memchr(const void *str, int Char, size_t num);
int		ft_memcmp(const void *str1, const void * str2, size_t num);
int		ft_strcmp(const char *str1, const char *str2);
char	*ft_strchr(const char *str, int Char);
char	*ft_strrchr(const char *str, int Char);
int		ft_strncmp(const char *str1, const char *str2, size_t nb);
char	*ft_strnstr(const char *str1, const char *str2, size_t nb);
size_t	ft_strlcat(char *str1, const char *str2, size_t size);
void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_memdel(void **ap);
void	*ft_memalloc(size_t size);
char	*ft_strnew(size_t size);
void	ft_strdel(char **as);
void	ft_strclr(char *s);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s);
char	*ft_itoa(int n);
void	ft_putendl(char const *s);
void	ft_putnbr(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr_fd(int n, int fd);
char	**ft_strsplit(char const *s, char c);
int		checkvars(int const fd, char *buf, char *line);
char	*cut_extra(const char *str, int end, char *dest);
int		chechstr(const char *str);
int		get_next_line(int const fd, char **line);
char	*readarchive(int const fd);

typedef struct	s_list
{
	void		*content;
	size_t		content_size;
	struct		s_list *next;
}				t_list;

typedef struct				s_read
{
	int						size;
	int						index;
	int						fd;
	char					*read;
	struct s_read			*next;
}							t_read;

#endif /*!LIBFT_H*/