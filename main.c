//
// Created by Mykola VUKOLOV on 12/31/17.
//

#include <ft_printf.h>

int		main()
{
	ft_printf("%*s\n", 23, "Hello World");
	ft_printf("%*ss", 23, "Hello World");
	return (0);
}