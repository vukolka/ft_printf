#include "libft.h"

void    ft_dict_add(t_dict **dict,char *keyword, char* (*func)(va_list, char*))
{
	t_dict *new;
	new = *dict;
	if (*dict)
	{
		while (new->next)
			new = new->next;		
		new->next = ft_dict_create(new->index + 1, keyword, func);
	}
	else
		*dict = ft_dict_create(0, keyword, func);
}