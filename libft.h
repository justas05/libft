/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbooke <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 00:59:59 by hbooke            #+#    #+#             */
/*   Updated: 2020/10/29 01:00:48 by makar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

int					ft_isalpha(int c);
int					ft_isblank(int c);
int					ft_isspace(int c);
int					ft_isascii(int c);
int					ft_isalnum(int c);
int					ft_iscntrl(int c);
int					ft_isdigit(int c);
int					ft_isgraph(int c);
int					ft_islower(int c);
int					ft_isprint(int c);
int					ft_ispunct(int c);
int					ft_isupper(int c);
int					ft_tolower(int c);
int					ft_toupper(int c);
int					ft_isxdigit(int c);

int					ft_atoi(const char *nptr);
char				*ft_itoa(int num);
void				*ft_calloc(size_t nmemb, size_t size);
size_t				ft_numlen(int num);

void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);

int					ft_strlen(const char *str);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *str, const char *needle);
char				*ft_strnstr(const char *s, const char *needle, size_t n);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strncpy(char *dest, const char *src, size_t n);
size_t				ft_strlcpy(char *dest, const char *src, size_t size);
char				*ft_strdup(const char *s);
char				*ft_strndup(const char *s, size_t size);
char				*ft_strcat(char *dest, const char *src);
char				*ft_strncat(char *dest, const char *src, size_t n);
size_t				ft_strlcat(char *dest, const char *src, size_t n);
char				*ft_strjoin (char **strs, char *sep);
char				**ft_split(char *str, char *sep);
size_t				ft_word_count(char *str, const char *sep);
size_t				ft_wordc(char **strs, size_t *j);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));

void				ft_bzero(void *s, size_t n);
void				*ft_memchr(const void *ptr, int c, size_t n);
void				*ft_memrchr(const void *ptr, int c, size_t n);
int					ft_memcmp(const void *ptr1, const void *ptr2, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				*ft_memset(void *str, int c, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t num);

typedef	struct		s_list
{
	struct s_list	*next;
	void			*content;
}					t_list;

t_list				*ft_lstnew(void *data);

void				ft_lstadd_front(t_list **begin_list, t_list *data);
void				ft_lstadd_back(t_list **begin_list, t_list *data);
t_list				*ft_lstlast(t_list *begin_list);

int					ft_lstsize(t_list *begin_list);
void				ft_lstclear(t_list **begin_list,
									void (*free_fct)(void *));

void				ft_lstiter(t_list *begin_list, void (*f)(void *));

#endif