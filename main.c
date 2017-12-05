#include <stdio.h>
#include "libft.h"
#include "ft_printf.h"
int     main()
{
    ft_printf("res: %d another number%d one more number: %s\n", 42, 666, "HELLO WROLD");
    printf("res: %d another number%d one more number: %s\n", 42, 666, "HELLO WROLD");
    return (1);    
}