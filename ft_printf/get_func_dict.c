#include "libft.h"
#include "ft_printf.h"

void  get_func_dict(t_dict **mods)
{
    ft_dict_add(mods, "d", &ft_format_d);
    ft_dict_add(mods, "i", &ft_format_d);
    ft_dict_add(mods, "x", &ft_format_x);
    ft_dict_add(mods, "X", &ft_format_X);
    ft_dict_add(mods, "o", &ft_format_o);
    ft_dict_add(mods, "s", &ft_format_s);
    ft_dict_add(mods, "c", &ft_format_c);
}