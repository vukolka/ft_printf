#include "libft.h"
#include "ft_printf.h"

char	*process_format(t_format *current, va_list ap)
{
    char *result;

    result = get_right_format(current, ap);
	result = apply_flags(current, result);
    return (result);
}