#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct      s_list
{
    void    *content;
    size_t  content_size;
    struct s_list *next;
}       *t_list;

int     ft_strlen(char *str);
char    *ft_strncpy(char *dest, const char *src, size_t n);
char    *ft_strcpy(char *dest, const char *src);
char    *ft_strdup(const char *s1);
char    *ft_strcat(char *dest, const char *src);
char    *ft_strncat(char *dest, const char *src, size_t n);

#endif