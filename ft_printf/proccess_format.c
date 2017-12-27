#include "libft.h"
#include "ft_printf.h"

char	*process_format(t_format *current, va_list ap)
{
    char *result;

    result = NULL;
    result = get_right_format(current, ap);
	if (current->format[0] == 'S')
		s_len += ft_wstrlen((wchar_t *)result);
    result = apply_flags(current, result);
    return (result);
}