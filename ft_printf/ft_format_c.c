#include "libft.h"
#include "ft_printf.h"

char    *ft_format_c(va_list ap, char *mod)
{
    unsigned char a;
	char	*ret;
	*mod = *mod;

	ret = ft_strnew(2);
	if (!ret)
		return (NULL);
	a = va_arg(ap, int);
    ret[0] = a;
	ret[1] = 0;
	return (ret);
}