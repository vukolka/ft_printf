#include "libft.h"
#include "ft_printf.h"

int     ft_printf(const char *format, ...)
{
    va_list ap;
    size_t  i;
    char    *res;
    char    *mod;
    char    *modstring;

    res = NULL;
    va_start(ap, format);
    i = 0;    
    while (format[i])
    {
        if(format[i] == 37)
        {
            res = ft_conncat(res, format, i);            
            i += get_modificator(format + i, &modstring);
            mod = get_right_format(modstring, ap);
            res = ft_conncat(res, mod, ft_strlen(mod));
            format += i;
            i = 0;
        }
        i++;
    }
    res = ft_conncat(res, format, ft_strlen(format));    
    va_end(ap);
    ft_putstr(res);
    free(res);
    return (1);
}

/*

    this is a %.2#s to be formated, %s

    while (format[i])
        if (%)
            while (ismodificator())
                save modificator into array
            modify
            
*/