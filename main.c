#include <stdio.h>
#include <fcntl.h>
#include "libft.h"
#include "ft_printf.h"
#include "get_next_line.h"

int     main()
{
	ft_printf("%-05o\n", 2500);
	printf("%-05o", 2500);
    return (1);
}