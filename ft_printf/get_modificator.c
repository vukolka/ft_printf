#include "libft.h"
#include "ft_printf.h"

int     get_modificator(const char *format, char **modstring)
{
    int     i;

    i = 0;
    while (format[i] != ' ' && format[i] && format[i] != '\n')
        i++;
    *modstring = ft_strndup(format, i);
    return (i);
}