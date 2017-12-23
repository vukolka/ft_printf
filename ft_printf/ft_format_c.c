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
	a = (unsigned char)va_arg(ap, int);
    ret[0] = a;
	if (a == 0)
		ret[0] = -69;
	return (ret);
}