#include <stdio.h>
#include <fcntl.h>
#include "libft.h"
#include "ft_printf.h"

int     main()
{
	wchar_t *a = malloc (20);
	a[0] = L'a';
	a[1] = L'a';
	a[2] = 0;

	int d = printf("%S", a);
	printf("\n");
	int c = ft_printf("%S", a);
	printf("\n");

	printf("%d\n", c);
	printf("%d", d);
    return (1);
}