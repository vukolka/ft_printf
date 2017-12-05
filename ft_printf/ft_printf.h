#ifndef FTPRINTF_H
# define FTPRINTF_H
# include <stdarg.h>
# include <stdio.h>

char    *ft_format_X(va_list ap);
char    *ft_format_s(va_list ap);
char    *ft_format_c(va_list ap);
char    *ft_format_x(va_list ap);
char    *ft_format_o(va_list ap);
void    get_func_dict(t_dict **mods);
int     get_modificator(const char *format, char **modstring);
char 	*get_right_format(char *modstring, va_list ap);
char    *ft_format_d(va_list ap);
char    *ft_conncat(char *res, const char *src, size_t len);
int     ft_printf(const char *format, ...);

#endif 

