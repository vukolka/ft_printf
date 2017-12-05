#include "libft.h"
#include "ft_printf.h"

char	*get_right_format(char *modstring, va_list ap)
{
	int	i;
	i = 0;
	while (modstring[i])
	{
		if(modstring[i] == 'd')
		{
			return (ft_format_d(va_arg(ap, int)));
		}
		i++;
	}
	return (" ");
}