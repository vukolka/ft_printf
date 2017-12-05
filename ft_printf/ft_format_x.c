#include "libft.h"
#include "ft_printf.h"

char    *ft_format_x(va_list ap)
{
    int a = va_arg(ap, int);
    return (ft_itoa_base(a, 16));
}
char    *ft_format_X(va_list ap)
{
    char *a = ft_format_x(ap);
	ft_strupper(a);
	return (a);
}