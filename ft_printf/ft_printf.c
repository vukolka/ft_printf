#include "libft.h"
#include "ft_printf.h"

int     ft_printf(const char *format, ...)
{
    va_list		ap;
    char		*res;
    int			i;
    int         total_len;
    char		*temp;

    total_len = 0;
    temp = NULL;
    i = 0;
    res = NULL;
    va_start(ap, format);
    while (format[i])
    {
		if(format[i] == MODCHAR)
		{
			total_len += i;
            res = ft_conncat(res, format, i);
            i++;
            i += apply_format(format + i, &temp, ap);
            res = ft_conncat(res, temp, ft_strlen(temp));
            free(temp);
            format += i;
            i = 0;
        }
		else
		    i++;
    }
    res = ft_conncat(res, format, ft_strlen(format));
    va_end(ap);
    ft_putstr(res);
    i = ft_strlen(res);
    free(res);
    return (i);
}


/*
 * res += until_format;
 * total_len += until_format;
 * total_len += format;
 * res += format;
 *
 *  write(1, res, total_len);
 */


/*
 * if (current->format == 'x')
 *
 */