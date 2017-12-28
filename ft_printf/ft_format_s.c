/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/28 07:25:44 by mvukolov          #+#    #+#             */
/*   Updated: 2017/12/28 07:25:46 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int		ft_wstrlen(wchar_t *str)
{
	int		i;

	if (!str)
		return (0);
	i = 0;
	while (*str++)
		i++;
	return (i);
}

char	*ft_format_s(va_list ap, char *mod)
{
	char *res;

	res = va_arg(ap, char*);
	if (res == NULL)
		res = ft_strdup("(null)");
	else
		res = ft_strdup(res);
	*mod = *mod;
	return (res);
}

char	*ft_format_ss(va_list ap, char *mod)
{
	wchar_t		*a;
	char		*res;
	size_t		i;

	*mod = *mod;
	i = 0;
	a = va_arg(ap, wchar_t *);
	res = ft_strnew(ft_wstrlen(a) * 2);
	while (a[i])
	{
		if (a[i] < 128)
			res[i] = (char)a[i];
		else
		{
			res[i] = '?';
			if (a[i] >= 0xD800 && a[i] <= 0xD8FF)
				i++;
		}
		i++;
	}
	return (res);
}
