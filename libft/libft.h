/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommadhi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 15:07:37 by ommadhi           #+#    #+#             */
/*   Updated: 2020/10/24 18:35:54 by ommadhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <sys/types.h>
# include <sys/stat.h>
# include <unistd.h>
# include <stdbool.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

bool					ft_is_dir(char *path);
char				*ft_strcut(char *str, int from, int to);
void				ft_free_tab(char **tabb);
int					ft_putnbstr(char *s1, int nb, char *s2);
int					ft_putc2str(char *s1, char c, char *s3);
int					ft_is_there(char *s, char c);
int					ft_putsfd(int p);
void				ft_ultimputstr(void *add, size_t size);
char				*ft_dectohex(unsigned int nb);
int					ft_is_whitespace(char c);
char				**ft_spl_whitespaces(char *str);
char				*ft_strndup(const char *s, int size);
int					ft_strncmp(const char *str1, const char *str2, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_atoi(const char *str);
size_t				ft_strlen(const char *str);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
int					ft_put4str(char *s1, char *s2, char *s3, char *s4);

void				ft_put2str(char *s1, char *s2);
void				*ft_memccpy(void *d, const void *s, int c, size_t len);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				*ft_memcpy(void *d, const void *s, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void *s, size_t n);

char				*ft_strnstr(const char *src, const char *to_find, size_t n);
char				*ft_strncpy(char *dest, const char *src, size_t n);
char				*ft_strncat(char *dest, const char *s, size_t n);
char				*ft_strstr(const char *s, const char *s2);
char				*ft_strcat(char *dest, const char *src);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strdup(const char *s);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);

void				ft_striteri(char *s, void (*f)(unsigned int, char *));
void				ft_striter(char *s, void (*f)(char *));
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
int					ft_strdel(char **as);
int					ft_strclr(char *s);
void				ft_putchar(char c);
int					ft_putstr(char const *str);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putnbr(int n);
void				ft_putnbr_fd(int n, int fd);
void				ft_putendl(char const *s);
int					ft_putendl_fd(char const *s, int fd);

char				*ft_strmapi(char const *s, char (*f) (unsigned int, char));
char				*ft_strtrim(char const *s);
char				*ft_strjoin(char const *s1, char const *s2);
void				ft_strjoin2(char **s1, char *s2);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strnew(size_t size);
char				**ft_strsplit(char const *s, char c);
char				*ft_itoa(int n);

int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
size_t				ft_strlcat(char *dst, const char *src, size_t size);

int					ft_space(char c);
int					ft_len_words(char *str, char c);
int					ft_countwords(char *str, char c);
void				ft_sort_ascii(char **str);
void				ft_print_tables(char **tabl);
char				*ft_strrev(char *str);

void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdel(t_list **alst, void (*del)(void*, size_t));
void				ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void				ft_lstadd(t_list **alst, t_list *new);

#endif
