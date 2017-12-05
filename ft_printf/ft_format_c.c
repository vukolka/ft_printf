#include "libft.h"
#include "ft_printf.h"

char    *ft_format_c(va_list ap)
{
	int		a;
	char	*ret;

	ret = ft_strnew(2);
	if (!ret)
		return (NULL);
	a = va_arg(ap, int);
	ret[0] = a;
	return (ret);
}