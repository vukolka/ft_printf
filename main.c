#include <stdio.h>
#include <fcntl.h>
#include "libft.h"
#include "ft_printf.h"

int     main()
{
	wchar_t *a = L"华语";

	int d = printf("%S", a);
	printf("\n");
	int c = ft_printf("%S", a);
	printf("\n");

	printf("std %d\n", d);
	printf("ft %d", c);
    return (1);
}