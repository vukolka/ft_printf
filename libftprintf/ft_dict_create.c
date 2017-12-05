#include "libft.h"

t_dict  *ft_dict_create(char *keyword, unsigned long int content)
{
    t_dict *newdict;

    newdict = malloc(sizeof(t_dict));
    if (!newdict)
        return (NULL);
    newdict->keyword = ft_strdup(keyword);
    newdict->content = content;
    newdict->index = 0;
    newdict->next = NULL;
    return (newdict);    
}