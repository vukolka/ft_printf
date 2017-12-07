#include "libft.h"
#include "ft_printf.h"

static int	ft_is_modifier(char c, char *listmodifier)
{
	while (*listmodifier)
		if(c == *listmodifier++)
			return (1);
	return (0);
}

int			get_modificator(const char *format, char **modstring)
{
	int		res;
	int     i;
	char    *formatlist;

	res = 0;
	formatlist = ft_strdup(MODSLIST);
	i = 0;
	while (format[i] && !ft_isspace(format[i])) 
	{
		if((res = ft_is_modifier(format[i], formatlist)))
		{
			i++;
			*modstring = ft_strndup(format, i);
			printf("modstring: %s\n", *modstring);	
			res = 1;			
			break;
		}
		i++;
	}
	if(res == 0)
		return (res);
	return (i);
}
