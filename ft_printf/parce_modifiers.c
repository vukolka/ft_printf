#include "libft.h"
#include "ft_printf.h"

void static	fill_with_zeros(t_format *current)
{
	current->sharp = 0;
	current->f_width = 0;
	current->space = 0;
	current->zero = 0;
	current->minus = 0;
	current->plus = 0;
	current->period = 0;
	current->format = ft_strnew(3);
}



t_format	*parce_modifiers(char *mods, t_format *current)
{
	int i;

	i = 0;
	fill_with_zeros(current);
	while (*mods)
	{
		if (*mods == '#')
			current->sharp = 1;
		else if (*mods == '+')
			current->plus = 1;
		else if (*mods == ' ')
			current->space = 1;
		else if (*mods == '-')
			current->minus = 1;
		else if (*mods == '.')
		{
			mods++;
			current->period = ft_atoi(mods);
			while (ft_isdigit(*mods))
				mods++;
			continue;
		}
		else if (*mods == '0')
			current->zero = 1;
		else if (ft_isdigit(*mods) && *mods != '0')
		{
			current->f_width = ft_atoi(mods);
			while (ft_isdigit(*mods))
				mods++;
			continue;
		}
		while (ft_strchr(MODSCHAR, *mods))
		{
			current->format[i++] = *mods;
			mods++;
		}
		mods++;
	}	
	return (current);
}