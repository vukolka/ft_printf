#include <stdio.h>
#include <fcntl.h>
#include "libft.h"
#include "ft_printf.h"

int     main()
{
	ft_printf("%%04i 42 == |%04i|", 42);
    return (1);
}