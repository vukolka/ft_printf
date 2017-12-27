#include <stdio.h>
#include "libft.h"
#include "ft_printf.h"

int     main()
{
	int c;
	wchar_t a[3];
	a[0] = '@';
	a[1] = '@';
	a[2] = 0;
	c = printf("%S", a);
	printf("%d\n",c);
	c = ft_printf("%S", a);
	printf("%d\n",c);
    return (1);
}