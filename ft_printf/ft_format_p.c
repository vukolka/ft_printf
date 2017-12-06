#include "libft.h"
#include "ft_printf.h"

char    *ft_format_p(va_list ap)
{
    char *a;
    char *ret;
    
    a = va_arg(ap, char*);
    ret = ft_strdup("0x");
    ft_strcat(ret, ft_itoa_base((unsigned long int)a, 16));
    return (ret);
}
