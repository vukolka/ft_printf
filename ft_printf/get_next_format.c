#include "libft.h"
#include "ft_printf.h"

char		*get_next_format(char **format)
{
	size_t	i;
	char	*res;

	i = 0;
	while (*format[i])
	{
		if(*format[i] == MODCHAR)
		{
			i+= get_modificator(*format + i, &res);
			format += i;
			return (res);
		}
		printf("sdfghnj");
	}
	return (NULL);
}