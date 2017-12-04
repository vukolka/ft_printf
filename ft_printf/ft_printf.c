#include "libft.h"
#include "ft_printf.h"

int     ft_printf(const char *format, ...)
{
    va_list ap;
    size_t  i;
    char    *res;
    char    *mod;

    res = NULL;
    va_start(ap, format);
    i = 0;    
    while (format[i])
    {
        if(format[i] == 37)
        {
            mod = ft_format_d(va_arg(ap, int));
            res = ft_conncat(res, format, i);
            res = ft_conncat(res, mod, ft_strlen(mod));
        }
        i++;
    }
    va_end(ap);
    ft_putstr(res);
    free(res);
    return (1);
}

/*

    this is a %s to be formated, %s

*/