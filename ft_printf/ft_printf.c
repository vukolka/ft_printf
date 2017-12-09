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
            res = ft_conncat(res, temp, i);
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
t_format current;
int		 bytedred;

bytedred = 0;
current = NULL;
while (bytes_red = get_mod_object(format, &modstring))
{
	formated = apply_format(current, va_list ap);
	result = conncat(result, format, i);
	result = conncat(result, format, formated);
	format += bytes_red;
}
            
*/