#include "libft.h"
#include "ft_printf.h"

char	*get_right_format(t_format *current, va_list ap)
{
	static t_dict	*mods = NULL;
	t_dict 			*curr;
	int				i;
	
	i = 0;
	if (!mods)
		get_func_dict(&mods);
    if((curr = ft_dict_get(current->format, mods)))
        return (curr->func(ap, current->format_mod));
	exit(0);
}