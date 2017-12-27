#include "libft.h"
#include "ft_printf.h"

int     ft_wstrlen(wchar_t *str)
{
    int     i;

    if (!str)
        return (0);
    i = 0;
    while (*str++)
        i++;
    return (i);
}

char    *ft_format_s(va_list ap, char *mod)
{
    char *res;

    res = va_arg(ap, char*);
    if (res == NULL)
        res = ft_strdup("(null)");
    else
        res = ft_strdup(res);
    *mod = *mod;
    return (res);
}
char    *ft_format_S(va_list ap, char *mod)
{
    wchar_t		*a;
	char *res;
	int i;
	int j;
	int t;
	char *temp;

	t = 0;
	j = 0;
	a = va_arg(ap, wchar_t*);
	i = ft_wstrlen(a) * 4;
	res = malloc(i + 1);
	temp = (char *)a;
	while (t < i)
	{
		if (temp[t])
		{
			res[j] = temp[t];
			j++;
		}
		t++;
	}
	res[j] = 0;
    return (res);
}