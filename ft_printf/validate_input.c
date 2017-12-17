#include "ft_printf.h"

int     validate_flags(t_format *current)
{
    if (current->format[0] == 0)
        return (1);
    return (0);
}
