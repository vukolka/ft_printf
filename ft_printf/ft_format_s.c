#include "libft.h"
#include "ft_printf.h"

char    *ft_format_s(va_list ap)
{
    return (ft_strdup(va_arg(ap, char*)));
}
char    *ft_format_S(va_list ap)
{
    size_t      i;
    char        *a;

    i = 0;
    a = ft_strdup(va_arg(ap, char*));
    while (a[i]) {
        a[i] = ft_toupper(a[i]);
        i++;
    }
    return (a);
}