#include "libft.h"
#include "ft_printf.h"

char    *ft_conncat(char *res, const char *src, size_t len)
{
    char *toret;
    size_t  size;

    size = ft_strlen(src);
    if (res)
        size+= ft_strlen(res);
    toret = ft_strnew(size);
    if (!toret)
        return (NULL);
    if (res)
    {
        ft_strcpy(toret, res);
        free(res);        
    }
    ft_strncat(toret, src, len);
    return (toret);
    
}