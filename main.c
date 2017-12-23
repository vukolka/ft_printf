#include <stdio.h>
#include <fcntl.h>
#include "libft.h"
#include "ft_printf.h"

int     main()
{
	ft_printf("%s == |%04i|","%-i 42", 42);
    return (1);
}