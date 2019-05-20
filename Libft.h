#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>

typedef struct      s_list
{
    void    *content;
    size_t  content_size;
    struct s_list *next;
}       *t_list;

#endif