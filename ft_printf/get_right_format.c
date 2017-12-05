#include "libft.h"
#include "ft_printf.h"

char	*get_right_format(char *modstring, va_list ap)
{
	static t_dict	*mods = NULL;
	t_dict 			*curr;
	int				i;
	
	i = 0;
	if (!mods)
		get_func_dict(&mods);
	while (modstring[i])
	{
		if((curr = ft_dict_get(modstring + i, mods)))
			return (curr->func(ap));
		i++;
	}
	return (" ");
}