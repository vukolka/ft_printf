#include <stdio.h>
#include "libft.h"
#include "ft_printf.h"
int     main()
{
    //ft_printf("res: %d another number%d one more number: %s\n", 42, 666, "HELLO WROLD");
    //printf("res: %d another number%d one more number: %s\n", 42, 666, "HELLO WROLD");
    ft_printf("a string: %s, this is a numbet: %d, this is an octal: %o\n", "Hello World", 123, 999);
    printf("a string: %s, this is a numbet: %d, this is an octal: %o\n", "Hello World", 123, 999);
    return (1);    
}