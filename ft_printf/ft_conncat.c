#include "libft.h"
#include "ft_printf.h"

char    *ft_conncat(char *res, const char *src, size_t l1, size_t l2)
{
    char    *toret;
    size_t  size;

    size = l1 + l2;
    toret = ft_strnew(size);
    if (!toret)
        return (NULL);
    if (res)
    {
        ft_strncpy(toret, res, l1);
        free(res);
    }
	ft_strncpy(toret + l1, src, l2);
    return (toret);
    
}
