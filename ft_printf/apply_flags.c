#include "libft.h"
#include "ft_printf.h"

char    *process_sharp(char format, char *s1)
{
    char *res;

    res = NULL;
    if (format == 'o')
        res = ft_conncat("0", s1, ft_strlen(s1));
    if (format == 'x')
        res = ft_conncat("0x", s1, ft_strlen(s1));
    if (format == 'X')
        res = ft_conncat("0X", s1, ft_strlen(s1));
    if (res)
    {
        free(s1);
        return (res);
    }
    return (s1);
}

char    *process_precision(int period, char *s1)
{
    char        *a;
    long int    i;

    i = period - ft_strlen(s1);
    if (i < 0)
        return (s1);
    a = ft_strnew(period);
    ft_memset(a, '0', i);
    ft_strcat(a, s1);
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
    if (current->zero && current->format[0] == 's')
        c = '0';
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

char    *process_plus(int plus, char *s1)
{
    char *res;

    if (!plus)
        return (s1);
    res = s1;
    if(s1[0] != '-')
    {
        res = ft_conncat("+", s1, ft_strlen(s1));
        free(s1);
    }
    return (res);
}

char     *process_space(char *s1)
{
    char *res;

    res = s1;
    if(s1[0] != '-' && s1[0] != '+')
    {
        res = ft_conncat(" ", s1, ft_strlen(s1));
        free(s1);
    }
    return (res);
}

char    *apply_flags(t_format *current, char *src)
{
    src = process_precision(current->period, src);
    if(current->sharp)
        src = process_sharp(current->format[0], src);
    src = process_plus(current->plus, src);
    if (current->space)
        if(src[0] != '-')
            src = process_space(src);
    src = process_width(current, src);
    return (src);
}