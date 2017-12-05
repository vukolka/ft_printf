#include "libft.h"

void    ft_strupper(char *a)
{
    if (!a)
        return ;
    while (*a)
    {
        *a = ft_toupper(*a);
        a++;
    }
}