#include "libft.h"
#include "ft_printf.h"

char    *ft_format_u(va_list ap, char *mod)
{
    unsigned long long int a;

    a = 0;
    if (ft_strequ(mod, "l"))
        a = va_arg(ap, unsigned long);
    else if (ft_strequ(mod, "ll"))
        a = va_arg(ap, unsigned long long);
    else if (ft_strequ(mod, "h"))
        a = va_arg(ap, unsigned int) & 0xFFFF;
    else if (ft_strequ(mod, "hh"))
        a = va_arg(ap, unsigned int) & 0xFF;
    else if (ft_strequ(mod, "j"))
        a = va_arg(ap, uintmax_t);
    else if (ft_strequ(mod, "z"))
        a = va_arg(ap, size_t);
    else if(*mod == 0)
        a = va_arg(ap, unsigned int);
    return (ft_itoa_base(a, 10));
}