#include "libft.h"
#include "ft_printf.h"

static void		ft_getnbr(int n, char *res)
{
	if (n == -2147483648)
	{
		ft_strcpy(res, "-2147483648");
		return ;
	}
	if (n < 0)
	{
		n *= -1;
		*res = '-';
	}
	if (n < 10)
		*res = n + '0';
	if (n > 9)
	{
		ft_getnbr(n / 10, res + 1);
		*res = n % 10 + '0';
	}
}

char    *ft_format_d(int a)
{
    char *res = ft_strnew(16);
    ft_getnbr(a, res);
    return (res);
}