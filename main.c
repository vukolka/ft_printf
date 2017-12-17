#include <stdio.h>
#include <fcntl.h>
#include "libft.h"
#include "ft_printf.h"
#include "get_next_line.h"

int     main()
{
    unsigned long long int a = -9223372036854775808;
    ft_printf("%lld\n", -9223372036854775808);
    printf("%llu", a);
    return (1);
}