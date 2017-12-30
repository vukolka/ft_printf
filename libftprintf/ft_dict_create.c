#include "libft.h"

t_dict  *ft_dict_create(int i, char *keyword, char* (*func) (va_list, char*))
{
	t_dict *newdict;

	newdict = malloc(sizeof(t_dict));
	if (!newdict)
		return (NULL);
	newdict->keyword = ft_strdup(keyword);
	newdict->func = func;
	newdict->index = i;
	newdict->next = NULL;
	return (newdict);
}
