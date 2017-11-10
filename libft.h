/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 12:31:30 by volivry           #+#    #+#             */
/*   Updated: 2017/11/10 20:11:00 by volivry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
size_t				ft_strlen(const char *s);	//Done
char				*ft_strdup(const char *s1);	//Done
char				*ft_strcpy(char *dst, const char *src);		//Done
char				*ft_strncpy(char *dst, const char *src, size_t len); //Done
char				*ft_strcat(char *s1, const char *s2); //done
char				*ft_strncat(char *s1, const char *s2, size_t n); //Done
size_t				*ft_strlcat(char *dst, const char *src, size_t size); //Done
char				*ft_strchr(const char *s, int c);		//Done
char				*ft_strrchr(const char *s, int c);		//Done
char				*ft_strstr(const char *haystack, const char *needle);	//Done
char				*ft_strnstr(const char *haystack, const char *needle,
					size_t len);	//Done
int					ft_strcmp(const char *s1, const char *s2); //done
int					ft_strncmp(const char *s1, const char *s2, size_t n); // done
int					ft_atoi(const char *str); //done
int					ft_isalpha(int c); //Done
int					ft_isdigit(int c); //Done
int					ft_isalnum(int c); // DONE
int					ft_isascii(int c); // Done
int					ft_isprint(int c); // Done
int					ft_toupper(int c); //done 
int					ft_tolower(int c); // Done

int					ft_islower(int c); //Done
int					ft_isupper(int c); //Done

void				*ft_memalloc(size_t size);  //Done 
void				ft_memdel(void **ap);
char				*ft_strnew(size_t size);  //Done
void				*ft_strdel(char **as);
void				ft_strclr(char *s);  //Done
void				ft_striter(char *s, void (*f)(char *)); //Done
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s, char c);
char				*ft_itoa(int n);
void				ft_putchar(char c);
void				ft_putstr(char const *s);
void				ft_putend(char const *s);
void				ft_putnbr(int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);

t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

#endif
