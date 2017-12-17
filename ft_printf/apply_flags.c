#include "libft.h"
#include "ft_printf.h"

char    *process_sharp(t_format *format, char *s1)
{
    char *res;
    char form;
    int     kostil;

    kostil = 1;
    if (*s1 == '0' || s1[1] == 0)
        kostil = 0;
    form = format->format[0];
    res = NULL;
    if (form == 'o' && kostil)
        res = ft_conncat(ft_strdup("0"), s1, ft_strlen(s1));
    if (form == 'x' && kostil)
        res = ft_conncat(ft_strdup("0x"), s1, ft_strlen(s1));
    if (form == 'X' && kostil)
        res = ft_conncat(ft_strdup("0X"), s1, ft_strlen(s1));
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

    period = format->period;
    if (period == 0)
        return (s1);
        i = period - ft_strlen(s1);
    if (i < 0 && format->format[0] != 's')
        return (s1);
    a = ft_strnew(period);
    if (i > 0)
    {
        ft_memset(a, '0', i);
        ft_strcat(a, s1);
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
    if (current->zero && ft_strchr("sxXoudDi", current->format[0]))
        c = '0';
    period = current->f_width;
    i = period - ft_strlen(s1);
    if (i < 0)
        return (s1);
    a = ft_strnew(period);
    if (current->minus)
    {
        c = ' ';
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
        res = ft_conncat(ft_strdup("+"), s1, ft_strlen(s1));
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
        res = ft_conncat(ft_strdup(" "), s1, ft_strlen(s1));
        free(s1);
    }
    return (res);
}

char    *apply_flags(t_format *current, char *src)
{
    if (current->format[0] != 'c')
        src = process_precision(current, src);
    if(current->sharp)
        src = process_sharp(current, src);
    if (current->format[0] != 'u')
        src = process_plus(current->plus, src);
    if (current->space && current->format[0] != 'u')
        if(src[0] != '-')
            src = process_space(src);
    src = process_width(current, src);
    return (src);
}