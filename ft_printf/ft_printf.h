#ifndef FTPRINTF_H
# define FTPRINTF_H
# include <stdarg.h>
# include <stdio.h>

char    *ft_format_d(int a);
char    *ft_conncat(char *res, const char *src, size_t len);
int     ft_printf(const char *format, ...);
#endif 

