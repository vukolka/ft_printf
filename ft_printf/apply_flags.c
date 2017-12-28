#include "libft.h"
#include "ft_printf.h"

char    *process_sharp(t_format *format, char *s1)
{
    char    *res;
    char    form;
    int     kostil;

    kostil = 1;
    if ((*s1 == '0' && s1[1] == 0) || !*s1)
        kostil = 0;
    form = format->format[0];
    res = NULL;
    if (form == 'o' && kostil)
        res = ft_conncat(ft_strdup("0"), s1, 1, ft_strlen(s1));
    if (form == 'x' && kostil)
        res = ft_conncat(ft_strdup("0x"), s1, 2, ft_strlen(s1));
    if (form == 'X' && kostil)
        res = ft_conncat(ft_strdup("0X"), s1, 2, ft_strlen(s1));
    if (res)
    {
        free(s1);
        return (res);
    }
    return (s1);
}

char    *process_precision(t_format *format, char *s1)
{
    char        *a;
    long int    i;
    int period;

	if (*(format->format) == 's' && !*s1)
		return (s1);
    period = format->period;
    if (period == 0)
        return (s1);
	if (period == -1 && ft_strchr("xXuodi", *(format->format)) && !ft_atoi(s1))
	{
		if (format->format[0] == 'o' && format->sharp)
			return (s1);
		*s1 = 0;
		return (s1);
	}
	i = period - ft_strlen(s1);
    if (i < 0 && format->format[0] != 's')
        return (s1);
    a = ft_strnew(period);
    if (i > 0)
    {
		if (*s1 == '-')
		{
			*a = '-';
			ft_memset(a + 1, '0', i + 1);
			ft_strcat(a, s1 + 1);
		}
		else
		{
			ft_memset(a, '0', i);
			ft_strcat(a, s1);
		}
	}
    else
        ft_strncat(a, s1, period);
    free(s1);
    return (a);
}

char    *process_width(t_format *current, char *s1)
{
    char        *a;
    long int    i;
    int         period;
    char        c;

	c = ' ';
	period = current->f_width;
    i = period - ft_strlen(s1);
    if (i < 0)
        return (s1);
    a = ft_strnew(period);
    if (current->minus)
    {
        ft_strcpy(a, s1);
        ft_memset(a + ft_strlen(s1), c, i);
    }
    else
    {
        ft_memset(a, c, i);
        ft_strcat(a, s1);
    }
    free(s1);
    return (a);
}

char	*process_zero_width(t_format *fomat, char *s1)
{
	char        *a;
	long int    i;
	int         period;
	char        c;

	if (!fomat->zero || fomat->period)
		return (s1);
	c = '0';
	period = fomat->f_width;
	i = period - ft_strlen(s1);
	if (i < 0)
		return (s1);
	a = ft_strnew(period);
	if (fomat->minus)
	{
		c = ' ';
		ft_strcpy(a, s1);
		ft_memset(a + ft_strlen(s1), c, i);
	}
	else
	{
		if (*s1 == '-')
		{
			*a = '-';
			ft_memset(a+1, c, i);
			ft_strcat(a, s1 + 1);
		}
		else
		{
			ft_memset(a, c, i);
			ft_strcat(a, s1);
		}
	}
	free(s1);
	return (a);
}

char    *process_plus(int plus, char *s1)
{
    char *res;

    if (!plus)
        return (s1);
    res = s1;
    if (s1[0] != '-')
    {
        res = ft_conncat(ft_strdup("+"), s1, 1, ft_strlen(s1));
        free(s1);
    }
    return (res);
}

char     *process_space(char *s1)
{
    char *res;

    res = s1;
    if(s1[0] != '-' && s1[0] != '+'
       && s1[0] != MODCHAR)
    {
        res = ft_conncat(ft_strdup(" "), s1, 1, ft_strlen(s1));
        free(s1);
    }
    return (res);
}

char    *apply_flags(t_format *current, char *src)
{
	if (src == NULL)
		return (NULL);
	if (current->format[0] != 'c')
		src = process_precision(current, src);
	if (current->sharp
		&& current->zero)
	current->f_width -= 2;
	src = process_zero_width(current, src);
	if (current -> sharp)
		src = process_sharp(current, src);
    if (current->format[0] != 'u')
        src = process_plus(current->plus, src);
    if (current->space && current->format[0] != 'u'
		&& current->format[0] != 'c')
        if(src[0] != '-')
            src = process_space(src);
	if (!current -> zero || current->period)
		src = process_width(current,src);
    return (src);
}