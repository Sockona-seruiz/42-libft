/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: seruiz <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 14:57:58 by seruiz       #+#   ##    ##    #+#       */
/*   Updated: 2019/11/08 10:24:14 by seruiz      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

/*
** copies up to size - 1 characters from the NUL-terminated string src to dst
*/

#include <stdlib.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int i;

	if (!src)
		return (0);
	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (i < size - 1 && src[i] != 0 && size != 0)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (ft_strlen(src));
}
