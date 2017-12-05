#include "libft.h"
#include "ft_printf.h"

char    *ft_format_o(va_list ap)
{
    int a = va_arg(ap, int);
    return (ft_itoa_base(a, 8));
}