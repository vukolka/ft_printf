#include "libft.h"
#include "ft_printf.h"

static void apply_flag(char *res, char flag)
{
}

void	modify_flags(char *res, char *flags)
{
	while (*flags)
	{
		apply_flag(res, *flags);
	}
}