#include "libft.h"
#include "ft_printf.h"

size_t	apply_format(const char **format, char **res, va_list ap)
{
    int     i;
	size_t 	size;
    char 	*modstring;
    t_format *current;

    current = (t_format*)malloc(sizeof(t_format));
    i = get_modificator(*format, &modstring);
	*format += i;
    parse_modifiers(modstring, current);
    *res = process_format(current, ap);
	size = ft_strlen(*res);
    free(modstring);
	free(current->format);
	free(current);
	if ((modstring = ft_strchr(*res, -42)))
		*modstring = 0;
	return (size);
}