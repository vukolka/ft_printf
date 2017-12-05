#include "libft.h"

char	*ft_strndup(const char *src, size_t len)
{
	char *ret;
	
	ret = malloc(len + 1);
	if (!ret)
		return (NULL);
	ft_strncpy(ret, src, len);
	return (ret);
}