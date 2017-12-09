#include <stdio.h>
#include <fcntl.h>
#include "libft.h"
#include "ft_printf.h"
#include "get_next_line.h"

int     main(int argc, char **argv)
{
    char *a;

    ft_printf("res: %d another number%d one more number: %s\n", 42, 666, "HELLO WROLD");
    ft_printf("res: %d another number%d one more number: %s\n", 42, 666, "HELLO WROLD");
    int fd = open(argv[1], O_RDONLY);
    while (get_next_line(fd, &a)) {
        ft_printf("%s\n", a);
        free(a);
    }
    close(fd);
    return (1);
}