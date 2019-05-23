#ifndef LIBFT_H
# define LIBFT_H
# define INTMAX 2147483647
# define INTMIN -2147483648
# include <string.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct      s_list
{
    void    *content;
    size_t  content_size;
    struct s_list *next;
}       *t_list;

int		ft_atoi(const char *str);
void	ft_bzero(void *s, int nbyte);
int 	ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int 	ft_isprint(int c);
void	*ft_memccpy(void	*dest, const void *src, int c, size_t n);
void	*ft_memchr(const void *str, int c, size_t n);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const char *src, size_t len);
void	*ft_memset(void *str, int c, size_t n);
char 	*ft_strchr(const char *str, int c);
int		ft_strcmp(const char *str1, const char *str2);
char 	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strrchr(const char *str, int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
int     ft_strlen(const char *str);
char    *ft_strncpy(char *dest, const char *src, size_t n);
char    *ft_strcpy(char *dest, const char *src);
char    *ft_strdup(const char *s1);
char    *ft_strcat(char *dest, const char *src);
char    *ft_strncat(char *dest, const char *src, size_t n);

#endif
