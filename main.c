#include "ft_printf.h"
#include <stdio.h>

int		main(int argc, char const *argv[])
{

	//Standard printf
	printf("%#23.11x, %#12o, % hhd, %c, %+.i, %23u \n", 6996, 654, '*', 42, -21, 99999999);

	//my printf
	ft_printf("%#23.11x, %#12o, % hhd, %c, %+.i, %23u \n", 6996, 654, '*', 42, -21, 99999999);

	return 0;
}