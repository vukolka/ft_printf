#include "libft.h"
#include "ft_printf.h"

int     ft_printf(const char *format, ...)
{
    va_list		ap;
    char		*res;
    int         i;
    char        *temp;

    temp = NULL;
    i = 0;
    res = NULL;
    va_start(ap, format);
    while (format[i])
    {
        if(format[i] == MODCHAR)
        {
            res = ft_conncat(res, format, i);
            i += apply_format(format + i, &temp, ap);
            res = ft_conncat(res, temp, ft_strlen(temp));
            free(temp);
            format += i;
            i = 0;
        }
		i++;
    }
    res = ft_conncat(res, format, ft_strlen(format));
    va_end(ap);
    ft_putstr(res);
    i = ft_strlen(res);
    free(res);
    return (i);
}
