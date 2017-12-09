#ifndef FTPRINTF_H
# define FTPRINTF_H
# include <stdarg.h>
# include <stdio.h>
# define MODSLIST "sSpdDioOuUxXcC"
# define MODCHAR '%'
# define MODSCHAR "lhjzsSpdDioOuUxXcC"
typedef struct	s_format
{
	int			sharp;
	int			f_width;
	int			space;
	int			zero;
	int			minus;
	int			plus;
	int			period;
	char		*format;
}				t_format;

char			*ft_format_X(va_list ap);
char			*ft_format_s(va_list ap);
char			*ft_format_S(va_list ap);
char			*ft_format_c(va_list ap);
char			*ft_format_p(va_list ap);
char			*ft_format_u(va_list ap);
char			*ft_format_x(va_list ap);
char			*ft_format_o(va_list ap);
void			get_func_dict(t_dict **mods);
int				get_modificator(const char *format, char **modstring);
char			*get_right_format(char *modstring, va_list ap);
char			*ft_format_d(va_list ap);
char			*ft_conncat(char *res, const char *src, size_t len);
int				ft_printf(const char *format, ...);
t_format		*parse_modifiers(char *mods, t_format *current);
int			    apply_format(const char *format, char **res, va_list ap);
char			*process_format(t_format *current, va_list ap);
char			*apply_flags(t_format *current, char *src);

#endif 

