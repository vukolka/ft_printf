#include "libft.h"
#include "ft_printf.h"

int     apply_format(const char *format, char **res, va_list ap)
{
    int i;
    char *modstring;
    t_format *current;

    current = (t_format*)malloc(sizeof(t_format));
    i = get_modificator(format, &modstring);
    parce_modifiers(modstring, current);
    *res = process_format(current, ap);
	free(current->format);
	free(current);
    return (i);
}