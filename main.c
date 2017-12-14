#include <stdio.h>
#include <fcntl.h>
#include "libft.h"
#include "ft_printf.h"
#include "get_next_line.h"

int     main()
{
    ft_printf("%#0.20 20lld, %d\n", 3000000000, 666);
    printf("%#0.20 20lld, %d", 3000000000, 666);
    return (1);
}