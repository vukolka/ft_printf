#include <stdio.h>
#include "libft.h"
#include "ft_printf.h"

int     main()
{
	wchar_t *a = malloc(6);
	a[0] = 'a';
	a[1] = 'a';
	a[2] = 0;
	printf("%S\n", a);
	ft_printf("%S", a);
    return (1);
}