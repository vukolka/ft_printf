#include "libft.h"

t_dict					*ft_dict_get(char *keyword, t_dict *dict)
{
    while (dict)
        if (*(dict->keyword) == *keyword)
            return (dict);
        else
            dict = dict->next;
    return (dict); 
}