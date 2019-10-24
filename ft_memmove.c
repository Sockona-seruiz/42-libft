/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcpy.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: seruiz <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 16:52:53 by seruiz       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/22 12:20:25 by seruiz      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	char const		*s;
	char			*d;

	i = -1;
	if (!src && !dst)
		return (0);
	s = src;
	d = dst;
	if ((int)src > (int)dst)
	{
		while (++i < len)
			*((char *)dst + i) = *((char *)src + i);
	}
	else
	{
		while (len)
		{
			*((char *)dst + len - 1) = *((char *)src + len - 1);
			len--;
		}
	}
	return (dst);
}
