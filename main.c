#include <stdio.h>
#include "libft.h"
#include "ft_printf.h"
int     main()
{
    char *a = "HELLO WORLD";

    //ft_printf("res: %d another number%d one more number: %s\n", 42, 666, "HELLO WROLD");
    //printf("res: %d another number%d one more number: %s\n", 42, 666, "HELLO WROLD");
    printf("%p\n", a);
    printf("%p\n", a);
    printf("%p\n", a);
    ft_printf("%s\n", a);
    return (1);    
}