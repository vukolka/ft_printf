#include "libft.h"
#include "ft_printf.h"

char    *ft_format_d(va_list ap)
{
    int a = va_arg(ap, int);
    return (ft_itoa(a));
}
