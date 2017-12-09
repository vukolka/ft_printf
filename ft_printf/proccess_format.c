#include "libft.h"
#include "ft_printf.h"

char	*process_format(t_format *current, va_list ap)
{
    char *result;

    result = NULL;
    result = get_right_format(current->format, ap);
    printf("process format: %s", result);
    return (result);
}