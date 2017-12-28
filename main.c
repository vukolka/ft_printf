#include <stdio.h>
#include "libft.h"
#include "ft_printf.h"

int     main()
{
	ft_printf("%0+5d\n", 42);
	printf("%0+5d", 42);
    return (1);
}