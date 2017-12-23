#include "libft.h"
#include "ft_printf.h"

char    *ft_format_s(va_list ap, char *mod)
{
    char *res;

    res = va_arg(ap, char*);
    if (res == NULL)
        res = ft_strdup("(null)");
    else
        res = ft_strdup(res);
    *mod = *mod;
    return (res);
}
char    *ft_format_S(va_list ap, char *mod)
{
    char        *a;

    *mod = *mod;
    a = ft_strdup(va_arg(ap, char*));
    return (a);
}