#include "libft.h"
#include "ft_printf.h"

char    *ft_format_s(va_list ap)
{
    return (va_arg(ap, char*));
}