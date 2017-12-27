#include <stdio.h>
#include "libft.h"
#include "ft_printf.h"

int     main()
{
	wchar_t *a = L"@@";
	printf("%S\n", a);
	ft_printf("%S", a);
    return (1);
}