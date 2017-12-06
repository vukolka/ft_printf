#include "libft.h"
#include "ft_printf.h"

char    *ft_format_u(va_list ap)
{
    int a = va_arg(ap, unsigned int);
    return (ft_itoa_base(a, 10));
}