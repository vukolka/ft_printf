#include "libft.h"
#include "ft_printf.h"

char    *ft_format_percent(va_list ap, char *mod)
{
    ap = ap + 2;
    mod++;
    return (ft_strdup("%"));
}
