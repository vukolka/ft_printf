#include "libft.h"

static int	str_len(int n, int base)
{
	int i;

	i = 0;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n > 0)
	{
		n = n / base;
		i++;
	}
	return (i);
}

char	convert_letter(int a)
{
	if (a == 10)
		return ('a');
	if (a == 11)
		return ('b');
	if (a == 12)
		return ('c');
	if (a == 13)
		return ('d');
	if (a == 14)
		return ('e');
	if (a == 15)
		return ('f');
	return (a + '0');
}

char*	ft_itoa_base(int n, int base)
{
	char				*ret;
	int					i;

	if (n == -2147483648)
		return (ft_strdup("-80000000"));
	if (n == -0)
		return (ft_strdup("0"));
	if (!(ret = ft_strnew(str_len(n, base))))
		return (NULL);
	i = str_len(n, base);
	if (n < 0)
	{
		n = -n;
		ret[0] = '-';
	}
	ret[i--] = 0;
	while (n > 0)
	{
		ret[i] = convert_letter(n % base);
		n = n / base;
		i--;
	}
	return (ret);
}