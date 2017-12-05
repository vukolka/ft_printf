#include "libft.h"
#include "ft_printf.h"

char	*get_right_format(char *modstring, va_list ap)
{
	int	i;
	i = 0;
	while (modstring[i])
	{
		if(modstring[i] == 'd' || modstring[i] == 'i')
			return (ft_format_d(ap));
		if(modstring[i] == 's')
			return (va_arg(ap, char*));
		i++;
	}
	return (" ");
}