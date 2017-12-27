#include <stdio.h>
#include <fcntl.h>
#include "libft.h"
#include "ft_printf.h"

int     main()
{
	wchar_t *a = L"1234";

	int d = printf("%S", a);
	printf("\n");
	int c = ft_printf("%S", a);
	printf("\n");

	printf("%d\n", c);
	printf("%d", d);
    return (1);
}